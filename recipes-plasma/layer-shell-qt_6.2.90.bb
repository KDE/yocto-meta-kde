# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/layer-shell-qt;nobranch=1;protocol=https"
SRCREV = "14b467465985d71e0ff257fb33da9a1d5b99231c"
S = "${WORKDIR}/git"
