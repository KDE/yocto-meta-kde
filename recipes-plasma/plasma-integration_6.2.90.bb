# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/plasma-integration;nobranch=1;protocol=https"
SRCREV = "3786c32d28bf03e2c25d8d00237723d91f7c00d6"
S = "${WORKDIR}/git"
