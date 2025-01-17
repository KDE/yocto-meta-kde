# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/bluedevil;nobranch=1;protocol=https"
SRCREV = "652dc5200c6948a352987637f2cbb304247ba909"
S = "${WORKDIR}/git"
