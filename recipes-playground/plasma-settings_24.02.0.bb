# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
# arbitrary selected hash to make it built with Qt6, no release yet
SRCREV = "8d8da9f091ea0c3d1caf1546cafa5a18c30cf9af"
SRC_URI = "git://commits.kde.org/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"
