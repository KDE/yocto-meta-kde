# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Heaptrack"
DESCRIPTION = "A heap memory profiler for Linux"
HOMEPAGE = "https://invent.kde.org/sdk/heaptrack"
LICENSE = "LGPL-2.1-only"
PR = "r0"

DEPENDS += "boost \
            elfutils \
            libunwind \
            zlib \
"

SRC_URI = "git://invent.kde.org/sdk/${BPN};nobranch=1;protocol=https"
SRC_URI += "file://0001-cmake-Fix-C-compatibility-of-libunwind-probes.patch"
S = "${UNPACKDIR}/git"

inherit cmake
inherit reuse_license_checksums

EXTRA_OECMAKE += "-DHEAPTRACK_BUILD_GUI=OFF"
