# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
# arbitrary selected hash to make it built with Qt6, no release yet
SRCREV = "f580e9401f73da3367d763908d2239d2c2c8f312"
SRC_URI = "git://commits.kde.org/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"
