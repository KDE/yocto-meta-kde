# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/metainfo;nobranch=1;protocol=https"
SRCREV = ""
S = "${WORKDIR}/git"
