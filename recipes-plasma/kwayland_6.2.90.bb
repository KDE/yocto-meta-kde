# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/kwayland;nobranch=1;protocol=https"
SRCREV = "8e48fad498f956d864c6c31d26d5c84ffd375149"
S = "${WORKDIR}/git"
