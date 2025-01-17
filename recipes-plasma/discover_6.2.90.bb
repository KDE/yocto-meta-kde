# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/discover;nobranch=1;protocol=https"
SRCREV = "b9f5b9b57b83db2b43913a7266772836cc1fe65f"
S = "${WORKDIR}/git"
