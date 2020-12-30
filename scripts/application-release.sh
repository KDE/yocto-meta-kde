#!/bin/bash
#
# add/remove Plasma release recipes
#
# SPDX-FileCopyrightText: 2019 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

function usage()
{
    echo "$1 [add|remove|update] <version> [<new version>]"
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
cat <<EOM > $name
# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require \${PN}.inc
SRCREV = "v\${PV}"
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
