# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/systemsettings;nobranch=1;protocol=https"
SRCREV = "f86c030a085b3cce4ebf8b13049e0c7ba8d5b37d"
S = "${WORKDIR}/git"
