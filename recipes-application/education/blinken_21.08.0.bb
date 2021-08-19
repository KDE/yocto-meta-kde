# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "git://invent.kde.org/education/blinken;nobranch=1;protocol=https"
SRCREV = "v${PV}"
S = "${WORKDIR}/git"
