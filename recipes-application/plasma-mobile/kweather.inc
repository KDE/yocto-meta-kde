# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Weather application for Plasma Mobile"
HOMEPAGE = ""
LICENSE = "GPL-2.0-or-later"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    qtcharts \
    ki18n \
    kirigami \
    kirigami-addons \
    knotifications \
    kquickcharts \
    libplasma \
    kweathercore \
"

inherit cmake_kdeapp
inherit kf6-kconfig
inherit kf6-kcoreaddons
inherit kf6-kauth
inherit mime-xdg
inherit reuse_license_checksums

RDEPENDS:${PN} += " \
    qtdeclarative-qmlplugins \
    qtcharts-qmlplugins \
"

FILES:${PN} += " \
    ${datadir}/plasma/plasmoids/ \
"
