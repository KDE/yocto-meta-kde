# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/kscreen;nobranch=1;protocol=https"
SRCREV = "207774aace768b9b88b02c916ee2b6e6e21feeb2"
S = "${WORKDIR}/git"
