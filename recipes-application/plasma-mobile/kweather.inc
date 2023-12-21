# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Weather application for Plasma Mobile"
HOMEPAGE = ""
LICENSE = "GPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-or-later.txt;md5=4cc91856b08b094b4f406a29dc61db21"
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

RDEPENDS:${PN} += " \
    qtdeclarative-qmlplugins \
    qtcharts-qmlplugins \
"

FILES:${PN} += " \
    ${datadir}/plasma/plasmoids/ \
"
