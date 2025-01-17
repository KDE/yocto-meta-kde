# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/plasma-pa;nobranch=1;protocol=https"
SRCREV = "b77720fc21215e64344a6e0d388f89b86cb2f925"
S = "${WORKDIR}/git"
