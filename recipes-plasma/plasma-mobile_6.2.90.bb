# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/plasma-mobile;nobranch=1;protocol=https"
SRCREV = "fdc4b7b760eabbd28a3939f632e5c2a29059d9a8"
S = "${WORKDIR}/git"
