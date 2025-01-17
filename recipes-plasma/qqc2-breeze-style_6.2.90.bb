# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/qqc2-breeze-style;nobranch=1;protocol=https"
SRCREV = "81b328fb066d012ab9a89a4cea80abde7cdbe77a"
S = "${WORKDIR}/git"
