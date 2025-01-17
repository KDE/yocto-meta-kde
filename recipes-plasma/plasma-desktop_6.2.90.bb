# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/plasma-desktop;nobranch=1;protocol=https"
SRCREV = "bde3a51b6d22e7b45fa2e83614a8245f01c63653"
S = "${WORKDIR}/git"
