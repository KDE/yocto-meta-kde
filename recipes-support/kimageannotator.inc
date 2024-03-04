# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "kImageAnnotator"
SUMMARY = "Tool for annotating images"
HOMEPAGE = "https://github.com/ksnip/kImageAnnotator"
LICENSE = "LGPL-3.0-only"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3000208d539ec061b899bce1d9ce9404"
PR = "r0"

DEPENDS = " \
    kcolorpicker \
    qtbase \
    qtsvg \
    qttools-native \
"

SRC_URI = "git://github.com/ksnip/kImageAnnotator.git;nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit qt6-cmake
inherit pkgconfig

EXTRA_OECMAKE += " \
    -DBUILD_WITH_QT6=ON \
    -DBUILD_EXAMPLE=OFF \
    -DCMAKE_POSITION_INDEPENDENT_CODE=ON \
"

FILES:${PN} += " \
    ${datadir}/kImageAnnotator/translations \
"
