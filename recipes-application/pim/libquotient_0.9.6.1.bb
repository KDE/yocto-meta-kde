# SPDX-FileCopyrightText: 2026 Marc Ferland <marc.ferland@gmail.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "libQuotient"
DESCRIPTION = "A Qt library to write cross-platform clients for Matrix"
HOMEPAGE = "https://quotient-im.github.io/libQuotient/"
LICENSE = "LGPL-2.1-or-later"
LIC_FILES_CHKSUM = "file://LICENSES/LGPL-2.1-or-later.txt;md5=147a320ed8b16b036829a0c71d424153"

inherit qt6-cmake

DEPENDS += "libolm \
            openssl \
            qtbase \
            qtkeychain \
"

SRC_URI = "git://github.com/quotient-im/libQuotient.git;branch=0.9.x;protocol=https"
SRCREV = "14e628f95005732de10f2c0079b05a433f47d94f"

S = "${UNPACKDIR}/git"

FILES:${PN}-dev += "${datadir}/ndk-modules"

EXTRA_OECMAKE:append = " -DCMAKE_BUILD_TYPE=Release"
EXTRA_OECMAKE:append = " -DBUILD_SHARED_LIBS=ON"
