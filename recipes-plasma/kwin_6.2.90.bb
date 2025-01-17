# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/kwin;nobranch=1;protocol=https"
SRCREV = "2a5da3587dc78134f14d813b2c13db8f3cc479b3"
S = "${WORKDIR}/git"
