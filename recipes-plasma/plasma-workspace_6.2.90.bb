# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/plasma-workspace;nobranch=1;protocol=https"
SRCREV = "18e56a59abd5cfb6a6ba50a0d21cd6e095cd07f2"
S = "${WORKDIR}/git"
