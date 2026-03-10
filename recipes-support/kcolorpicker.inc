# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "kColorPicker"
DESCRIPTION = "Qt based Color Picker with popup menu"
HOMEPAGE = "https://github.com/ksnip/kColorPicker"
LICENSE = "LGPL-3.0-only"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3000208d539ec061b899bce1d9ce9404"

DEPENDS += "qtbase"

SRC_URI = "git://github.com/ksnip/kColorPicker.git;nobranch=1;protocol=https"
S = "${UNPACKDIR}/git"

inherit qt6-cmake
inherit pkgconfig

EXTRA_OECMAKE += "-DBUILD_WITH_QT6=on \
                  -DBUILD_EXAMPLE=OFF \
                  -DBUILD_SHARED_LIBS=ON \
"
