# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/libplasma;nobranch=1;protocol=https"
SRCREV = "61d42354ae48d8b7abe625066f00d974463fc6b4"
S = "${WORKDIR}/git"
