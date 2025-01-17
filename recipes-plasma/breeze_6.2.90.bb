# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/breeze;nobranch=1;protocol=https"
SRCREV = "3270aaa6bc7bec1c8e6833b77b88215acdcd2959"
S = "${WORKDIR}/git"
