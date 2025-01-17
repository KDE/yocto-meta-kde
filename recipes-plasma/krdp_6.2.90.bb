# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/krdp;nobranch=1;protocol=https"
SRCREV = "cc756b4270877997f0499a4b7a67ef8499728b79"
S = "${WORKDIR}/git"
