# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/plasma-firewall;nobranch=1;protocol=https"
SRCREV = "707c9dea348e7686079a2c0481683bb0a3db224c"
S = "${WORKDIR}/git"
