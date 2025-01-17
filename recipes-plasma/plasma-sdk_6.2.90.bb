# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/plasma-sdk;nobranch=1;protocol=https"
SRCREV = "f031dad44ef3b259a9491d3eb7675bcc4b0cf6b0"
S = "${WORKDIR}/git"
