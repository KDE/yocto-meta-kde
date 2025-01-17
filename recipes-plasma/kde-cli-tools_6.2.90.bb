# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/kde-cli-tools;nobranch=1;protocol=https"
SRCREV = "bca779b01fd7c55fcc5899a1debf151f931da0af"
S = "${WORKDIR}/git"
