# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/libksysguard;nobranch=1;protocol=https"
SRCREV = "6fd7549af851d157bda4e237747ae155f700e014"
S = "${WORKDIR}/git"
