# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/plasma-vault;nobranch=1;protocol=https"
SRCREV = "26f8d4e489c18f7cfe53a635be457af22e88a9dd"
S = "${WORKDIR}/git"
