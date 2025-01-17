# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/powerdevil;nobranch=1;protocol=https"
SRCREV = "4141c561b4e8672d04671a5cd6c65cb8dccf919d"
S = "${WORKDIR}/git"
