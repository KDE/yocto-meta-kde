# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${BPN}.inc
SRC_URI = "https://www.freedesktop.org/software/PackageKit/releases/PackageKit-${PV}.tar.xz"
SRC_URI[sha256sum] = "ea9e5954bc74b24c02cf31674a3ec792b3b74d5758ac0b6aca58ad76fc54374e"
S = "${UNPACKDIR}/PackageKit-${PV}"
