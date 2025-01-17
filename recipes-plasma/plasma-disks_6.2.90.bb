# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/plasma-disks;nobranch=1;protocol=https"
SRCREV = "76ddec2fa302bf002378774283a864a6fd9e8fee"
S = "${WORKDIR}/git"
