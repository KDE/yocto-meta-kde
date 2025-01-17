# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/plasma-nm;nobranch=1;protocol=https"
SRCREV = "0bc452e34f8c9f65d202683cbef984cf18b9af98"
S = "${WORKDIR}/git"
