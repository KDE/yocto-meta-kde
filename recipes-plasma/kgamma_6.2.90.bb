# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/kgamma;nobranch=1;protocol=https"
SRCREV = "1b770a084ebfcb1a2659460beaa56d18e2c66506"
S = "${WORKDIR}/git"
