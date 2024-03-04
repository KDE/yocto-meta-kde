# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "kColorPicker"
SUMMARY = "QToolButton with color popup menu with lets you select a colors"
HOMEPAGE = "https://github.com/ksnip/kColorPicker"
LICENSE = "LGPL-3.0-only"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3000208d539ec061b899bce1d9ce9404"
PR = "r0"

DEPENDS = " \
    qtbase \
"

SRC_URI = "git://github.com/ksnip/kColorPicker.git;nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit qt6-cmake
inherit pkgconfig

EXTRA_OECMAKE += " \
    -DBUILD_WITH_QT6=on \
    -DBUILD_EXAMPLE=OFF \
    -DBUILD_SHARED_LIBS=ON \
"
