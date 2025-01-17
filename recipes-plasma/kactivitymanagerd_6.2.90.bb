# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/kactivitymanagerd;nobranch=1;protocol=https"
SRCREV = "3d51ffb57043f61ebf6b13fa9cf1a9ff6bde39e0"
S = "${WORKDIR}/git"
