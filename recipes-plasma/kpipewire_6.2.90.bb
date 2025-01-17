# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/kpipewire;nobranch=1;protocol=https"
SRCREV = "a97632aeab1f59a8d959744e808408b482ba7db6"
S = "${WORKDIR}/git"
