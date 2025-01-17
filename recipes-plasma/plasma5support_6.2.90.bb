# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/plasma5support;nobranch=1;protocol=https"
SRCREV = "d20e4429b28bcfc00645648cab70390b59e7d6db"
S = "${WORKDIR}/git"
