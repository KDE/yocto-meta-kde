# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/polkit-kde-agent-1;nobranch=1;protocol=https"
SRCREV = "edbf4db75ad3d39f366344d0dc09ff7181451511"
S = "${WORKDIR}/git"
