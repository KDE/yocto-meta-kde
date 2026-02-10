# SPDX-FileCopyrightText: 2023 Maxime Roussin-Bélanger <maxime.roussinbelanger@gmail.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Breeze inspired QtQuickControls 2 Style"
HOMEPAGE = "https://invent.kde.org/plasma/qqc2-breeze-style"
LICENSE = "LGPL-3.0-only"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    kirigami \
    kquickcharts \
"

inherit cmake_plasma
inherit reuse_license_checksums

FILES:${PN} += " \
    ${libdir}/plugins/kf6/kirigami/platform/*.so \
    ${libdir}/qml/org/kde/kirigami/* \
    ${libdir}/qml/org/kde/breeze/* \
"
