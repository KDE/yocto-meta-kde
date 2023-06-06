#!/bin/bash
#
# add/remove Plasma Mobile release recipes
#
# SPDX-FileCopyrightText: 2019 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

function usage()
{
    echo "$1 [add|add-tarball|remove|update|add-gitmaster] <version>"
    exit 1
}

command=$1
if [ -z "$command" ]; then usage $0; fi

version=$2
if [ -z "$version" ]; then usage $0; fi

base=`dirname $0`/../recipes-plasma-mobile

case $command in
add)
    for recipe in `find $base -name "*.inc" | grep -v /staging/`; do
        name=`echo $recipe | sed -e "s,\.inc,_${version}.bb,"`
        app=$(echo $recipe | grep -P -o '[0-9a-zA-Z\-]+(?=\.inc)')
cat <<EOM > $name
# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require \${PN}.inc
SRC_URI = "git://anongit.kde.org/${app};nobranch=1;protocol=https"
SRCREV = "v\${PV}"
S = "\${WORKDIR}/git"
EOM
        git add $name
    done
    ;;
add-gitmaster)
    # porting aid for KF6/Qt6 staging
    # search for all non-staging inc files without underlines
    for recipe in $(find $base -regex ".*/[0-9a-zA-Z\-]+\.inc" | grep -v /staging/); do
        name=$(echo $recipe | sed -e "s,\.inc,_${version}.bb,")
        package=$(echo $recipe | grep -P -o '[0-9a-zA-Z\-]+(?=\.inc)')
        invent_project="plasma-mobile"
        echo "update ${package}"
        SRCREV=$(git ls-remote https://commits.kde.org/${package}.git/ HEAD | awk '{ print $1}')
cat <<EOM > $name
# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require \${PN}.inc
SRCREV = "${SRCREV}"
SRC_URI = "git://commits.kde.org/\${BPN};nobranch=1;protocol=https"
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
        url="https://download.kde.org/stable/plasma-mobile/${version}/${app}-${version}.tar.xz"
        sha256=$(curl -s "${url}.sha256" | cut -d" " -f1)
        echo "${url} : ${sha256}"
# examples:
#https://download.kde.org/stable/plasma-mobile/21.07/kclock-21.07.tar.xz
#https://download.kde.org/stable/plasma-mobile/21.07/kclock-21.07.tar.xz.sha256
cat <<EOM > $name
# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require \${PN}.inc
SRC_URI = "${url}"
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
update)
    new_version=$3
    for recipe in `find $base -name "*_$version.bb"`; do
        new_recipe=`echo $recipe | sed -e "s,$version,$new_version,"`
        git mv $recipe $new_recipe
    done
    ;;
*)
    usage $0
    ;;
esac
