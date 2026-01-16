# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Clock app for Plasma Mobile"
HOMEPAGE = ""
LICENSE = "GPL-2.0-only | GPL-3.0-only"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-or-later.txt;md5=4cc91856b08b094b4f406a29dc61db21"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    qtmultimedia \
    kdeclarative \
    libplasma \
    kiconthemes \
    ki18n \
    kirigami \
    kirigami-addons \
    knotifications \
    kstatusnotifieritem \
    qtwayland \
    qtwayland-native \
"

inherit cmake_kdeapp
inherit kf6-kconfig
inherit kf6-kcoreaddons
inherit kf6-kauth
inherit mime-xdg

RDEPENDS:${PN} += " \
    qtdeclarative-qmlplugins \
"

FILES:${PN} += " \
    ${datadir}/plasma/plasmoids/ \
    ${datadir}/krunner/ \
"
