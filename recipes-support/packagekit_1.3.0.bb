# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${BPN}.inc
SRC_URI = "https://www.freedesktop.org/software/PackageKit/releases/PackageKit-${PV}.tar.xz"
SRC_URI[sha256sum] = "f929a9be395e94ba5b0351c3e95f09212324af12b9c30a3a6d255c443b74e0e6"
S="${WORKDIR}/PackageKit-${PV}"
