# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/plasma-nano;nobranch=1;protocol=https"
SRCREV = "6a27fa93ca7be1a53d11adae1de2d7eaee71df18"
S = "${WORKDIR}/git"
