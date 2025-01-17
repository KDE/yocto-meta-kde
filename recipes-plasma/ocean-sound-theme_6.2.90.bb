# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/ocean-sound-theme;nobranch=1;protocol=https"
SRCREV = "849850345068edcaaef9c1ca76e4251a4134d121"
S = "${WORKDIR}/git"
