# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "git://anongit.kde.org/plasma-workspace;nobranch=1;protocol=https"
SRCREV = "v${PV}"
S = "${WORKDIR}/git"
