# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Clock app for Plasma Mobile"
HOMEPAGE = ""
LICENSE = "GPL-2.0-or-later | GPL-3.0-or-later | LGPL-2.0-or-later | LGPL-2.1-or-later | MIT"
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
inherit reuse_license_checksums

RDEPENDS:${PN} += " \
    qtdeclarative-qmlplugins \
"

FILES:${PN} += " \
    ${datadir}/plasma/plasmoids/ \
    ${datadir}/krunner/ \
"
