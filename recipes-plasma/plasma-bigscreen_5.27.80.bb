# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
#FIXME porting branch
SRCREV = "c5e9109be6b57104c7ac116e8ae6fe3a72a067ea"
SRC_URI = "git://invent.kde.org/plasma/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"
