# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/kglobalacceld;nobranch=1;protocol=https"
SRCREV = "c9368afd8ace9514d6a22e40533c670f5895d85e"
S = "${WORKDIR}/git"
