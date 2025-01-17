# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/plasma-welcome;nobranch=1;protocol=https"
SRCREV = "d0b2f2075ceb18e279c7a53f09e48f7adb9c441d"
S = "${WORKDIR}/git"
