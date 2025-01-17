# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/xdg-desktop-portal-kde;nobranch=1;protocol=https"
SRCREV = "b7574d09c0b1cbfd1287b6fde66bad855332bd88"
S = "${WORKDIR}/git"
