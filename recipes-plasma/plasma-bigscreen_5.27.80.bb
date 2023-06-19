# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc

# WIP hash
SRCREV = "c6bff9e7f278fcaeb373c5aed443e1b4bde5f969"
SRC_URI = "git://invent.kde.org/plasma/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"
