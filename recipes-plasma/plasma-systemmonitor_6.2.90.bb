# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/plasma-systemmonitor;nobranch=1;protocol=https"
SRCREV = "93971fdc56ab5731bfa95301921e4264ff0ac6af"
S = "${WORKDIR}/git"
