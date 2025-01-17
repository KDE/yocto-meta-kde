# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/libkscreen;nobranch=1;protocol=https"
SRCREV = "fd837fd0a26a67c8ea2b01c6231dfaf6c585329c"
S = "${WORKDIR}/git"
