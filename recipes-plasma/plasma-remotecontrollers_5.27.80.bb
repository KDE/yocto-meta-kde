# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
#FIXME branch
SRCREV = "22656d61d7b00ed22b4f40ba80c19105adb8bf8c"
SRC_URI = "git://invent.kde.org/plasma-bigscreen/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"
