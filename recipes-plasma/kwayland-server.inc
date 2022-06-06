# SPDX-FileCopyrightText: 2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2022 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KWayland Server"
HOMEPAGE = "https://invent.kde.org/plasma/kwayland-server/"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = " \
    file://LICENSES/LGPL-2.1-only.txt;md5=fabba2a3bfeb22a6483d44e9ae824d3f \
"
PR = "r0"

inherit cmake_qt5
inherit pkgconfig
# TODO skip inherit of cmake_plasma for now because to leads to build errors for native package

DEPENDS:class-target = " \
    qtbase \
    qtwayland \
    qtwayland-native \
    kwayland \
    plasma-wayland-protocols \
    kwayland-server-native \
    wayland \
    wayland-protocols \
"

DEPENDS:class-native = " \
    qtbase-native \
    extra-cmake-modules-native \
"

SRC_URI:append:class-native = " \
    file://fake_project_root.patch \
"

OECMAKE_SOURCEPATH:class-native = "${S}/src/tools"

do_install:class-native() {
    install -d ${D}/${bindir}
    install ${B}/bin/qtwaylandscanner_kde ${D}/${bindir}
}

FILES:${PN}-dev += " \
    ${datadir}/qlogging-categories5/* \
"

BBCLASSEXTEND = "native"
