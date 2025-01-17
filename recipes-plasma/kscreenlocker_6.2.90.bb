# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/kscreenlocker;nobranch=1;protocol=https"
SRCREV = "308e03e2301d7d0154a5dcd93ca19751c62ab7c2"
S = "${WORKDIR}/git"
