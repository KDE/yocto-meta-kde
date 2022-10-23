# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Clock app for Plasma Mobile"
HOMEPAGE = ""
LICENSE = "GPL-2.0 | GPL-3.0"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-or-later.txt;md5=4cc91856b08b094b4f406a29dc61db21"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    qtmultimedia \
    kdeclarative \
    kiconthemes \
    ki18n \
    kirigami \
    knotifications \
    plasma-framework \
"

inherit cmake_kdeapp
inherit kconfig
inherit kcoreaddons
inherit kauth
inherit mime-xdg

RDEPENDS:${PN} += " \
    qtdeclarative-qmlplugins \
    qtquickcontrols2-qmlplugins \
"

FILES:${PN} += " \
    ${datadir}/plasma/plasmoids/ \
"
