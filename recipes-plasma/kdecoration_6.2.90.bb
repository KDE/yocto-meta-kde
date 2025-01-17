# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/kdecoration;nobranch=1;protocol=https"
SRCREV = "bf479ed0c8011ed08927a2b82dfd5c10b11bdafc"
S = "${WORKDIR}/git"
