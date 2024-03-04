#!/bin/bash
#
# add/remove KDE Gear release recipes
#
# SPDX-FileCopyrightText: 2019 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

function usage()
{
    echo "$1 [add|add-tarball|remove|update] <version> [<new version>]"
    exit 1
}

command=$1
if [ -z "$command" ]; then usage $0; fi

version=$2
if [ -z "$version" ]; then usage $0; fi

base=`dirname $0`/../recipes-application

case $command in
add)
    for recipe in `find $base -name "*.inc" | grep -v /staging/`; do
        name=`echo $recipe | sed -e "s,\.inc,_${version}.bb,"`
        module=$(echo $recipe | grep -P -o '[0-9a-zA-Z\-]+(?=/[0-9a-zA-Z\-]+\.inc)')
        app=$(echo $recipe | grep -P -o '[0-9a-zA-Z\-]+(?=\.inc)')
cat <<EOM > $name
# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require \${PN}.inc
SRC_URI = "git://invent.kde.org/${module}/${app};nobranch=1;protocol=https"
SRCREV = "v\${PV}"
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
        url="https://download.kde.org/stable/release-service/${version}/src/${app}-${version}.tar.xz"
        sha256=$(curl -s "${url}.sha256" | cut -d" " -f1)
        echo "${url} : ${sha256}"
# examples:
#https://download.kde.org/stable/release-service/21.08.0/src/akonadi-21.08.0.tar.xz
cat <<EOM > $name
# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require \${PN}.inc
SRC_URI = "${url}"
SRC_URI[sha256sum] = "${sha256}"
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
