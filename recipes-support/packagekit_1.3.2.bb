# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${BPN}.inc
SRC_URI = "https://www.freedesktop.org/software/PackageKit/releases/PackageKit-${PV}.tar.xz"
SRC_URI[sha256sum] = "aa7269e600f6011f381d869b3650552602bbb9f38982e1106621b940bab979b8"
S="${WORKDIR}/PackageKit-${PV}"
