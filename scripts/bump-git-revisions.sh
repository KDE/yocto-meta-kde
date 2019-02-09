#!/bin/bash
#
# Bump Git revisions in non-release recipes
#

function usage()
{
    echo "$1 <local-source-dir>"
    exit 1
}

src_dir=$1
if [ -z "$src_dir" ]; then usage $0; fi

base=`dirname $0`/../

for recipe in `find $base -name "*_git.bb"`; do
    package=`basename "$recipe"| sed -e "s,_git.bb,,"`
    echo -n "Updating $package..."
    if [ -d "$src_dir/$package" ]; then
        pushd $src_dir/$package > /dev/null
        git fetch
        new_rev=`git show --format="%H" -s origin/master`
        popd > /dev/null
        sed -i -e "s,^SRCREV =.*$,SRCREV = \\\"${new_rev}\\\"," $recipe
        echo "$new_rev"
    else
        echo "missing local checkout"
    fi
done
