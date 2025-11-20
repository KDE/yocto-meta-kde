# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
# v25.11.0
SRCREV = "d295c2e88b6c2f019aed5f9334fdf055a0d214c6"
SRC_URI = "git://commits.kde.org/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"
