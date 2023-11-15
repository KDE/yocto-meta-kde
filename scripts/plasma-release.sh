#!/bin/bash
#
# add/remove Plasma release recipes
#
# SPDX-FileCopyrightText: 2018-2019 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020-2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

function usage()
{
    echo "$1 [add|add-tarball|remove|add-gitmaster] <version>"
    exit 1
}

command=$1
if [ -z "$command" ]; then usage $0; fi

version=$2
if [ -z "$version" ]; then usage $0; fi

base=`dirname $0`/../recipes-plasma

case $command in
add)
    for recipe in $(find $base -name "*.inc" | grep -v /staging/); do
        name=$(echo $recipe | sed -e "s,\.inc,_${version}.bb,")
        app=$(echo $recipe | grep -P -o '[0-9a-zA-Z\-]+(?=\.inc)')
        lsremote=$(git ls-remote --exit-code https://anongit.kde.org/${app} v${version})
        if [ $? -eq 2 ]; then
            echo "No remote tag found for ${app}, recipe will be invalid"
        fi
        revision=$(echo ${lsremote} | cut -d ' ' -f1)
cat <<EOM > $name
# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require \${PN}.inc
SRC_URI += "git://anongit.kde.org/${app};nobranch=1;protocol=https"
SRCREV = "${revision}"
S = "\${WORKDIR}/git"
EOM
        git add $name
    done
    ;;
add-gitmaster)
    # porting aid for Plasma KF6/Qt6 staging
    # search for all non-staging inc files without underlines
    for recipe in $(find $base -regex ".*/[0-9a-zA-Z\-]+\.inc" | grep -v /staging/); do
        name=$(echo $recipe | sed -e "s,\.inc,_${version}.bb,")
        package=$(echo $recipe | grep -P -o '[0-9a-zA-Z\-]+(?=\.inc)')
        invent_project="plasma"
        if [ ${package} = "plasma-remotecontrollers" ] || [ ${package} = "plank-player" ] || [ ${package} = "aura-browser" ]; then
            invent_project="plasma-bigscreen"
        fi
        echo "update ${package}"
        SRCREV=$(git ls-remote https://invent.kde.org/${invent_project}/${package}.git/ HEAD | awk '{ print $1}')
cat <<EOM > $name
# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require \${PN}.inc
SRCREV = "${SRCREV}"
SRC_URI = "git://invent.kde.org/${invent_project}/\${BPN};nobranch=1;protocol=https"
S = "\${WORKDIR}/git"
EOM
        git add $name
    done
    ;;
add-tarball)
    # search for all non-staging inc files without underlines
    for recipe in $(find $base -regex ".*/[0-9a-zA-Z\-]+\.inc" | grep -v /staging/); do
        name=$(echo $recipe | sed -e "s,\.inc,_${version}.bb,")
        app=$(echo $recipe | grep -P -o '[0-9a-zA-Z\-]+(?=\.inc)')
        url="https://download.kde.org/unstable/plasma/${version}/${app}-${version}.tar.xz"
        sha256=$(curl -s "${url}.sha256" | cut -d" " -f1)
        echo "${url} : ${sha256}"
# examples:
#https://download.kde.org/stable/plasma/5.22.5/bluedevil-5.22.5.tar.xz
#https://download.kde.org/stable/plasma/5.22.5/bluedevil-5.22.5.tar.xz.sha256
cat <<EOM > $name
# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require \${PN}.inc
SRC_URI += "${url}"
SRC_URI[sha256sum] = "${sha256}"
${extraconfig}
EOM
         git add $name
    done
    ;;
remove)
    for recipe in `find $base -name "*_$version.bb"`; do
        git rm -f $recipe
    done
    ;;
*)
    usage $0
    ;;
esac
