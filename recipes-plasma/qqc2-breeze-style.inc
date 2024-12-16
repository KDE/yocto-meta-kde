# SPDX-FileCopyrightText: 2023 Maxime Roussin-Bélanger <maxime.roussinbelanger@gmail.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Breeze inspired QtQuickControls 2 Style"
HOMEPAGE = "https://invent.kde.org/plasma/qqc2-breeze-style"
LICENSE = "LGPL-3.0-only"
LIC_FILES_CHKSUM = "file://LICENSES/LGPL-3.0-only.txt;md5=852ecadc0ac7e6f4d7144d5544a3815b"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    kirigami \
    kquickcharts \
"

inherit cmake_plasma

FILES:${PN} += " \
    ${libdir}/plugins/kf6/kirigami/platform/*.so \
    ${libdir}/qml/org/kde/kirigami/* \
    ${libdir}/qml/org/kde/breeze/* \
"
