# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
# arbitrary selected hash to make it built with Qt6, no release yet
SRCREV = "7034b7e09d3c817d0d6d496fcd1c11feabeb221d"
SRC_URI = "git://commits.kde.org/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"
