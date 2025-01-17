# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/milou;nobranch=1;protocol=https"
SRCREV = "ca0e45ac31312fa0304d7cd09ff26b76575c27ba"
S = "${WORKDIR}/git"
