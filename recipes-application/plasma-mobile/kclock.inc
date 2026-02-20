# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KClock"
DESCRIPTION = "Clock app for Plasma Mobile"
HOMEPAGE = "https://invent.kde.org/utilities/kclock"
LICENSE = "GPL-2.0-or-later | GPL-3.0-or-later | LGPL-2.0-or-later | LGPL-2.1-or-later | MIT"
PR = "r0"

DEPENDS += "kdeclarative \
            ki18n \
            kiconthemes \
            kirigami \
            kirigami-addons \
            knotifications \
            kstatusnotifieritem \
            libplasma \
            qtdeclarative \
            qtmultimedia \
            qtwayland \
            qtwayland-native \
"

inherit cmake_kdeapp
inherit kf6-kconfig
inherit kf6-kcoreaddons
inherit kf6-kauth
inherit mime-xdg
inherit reuse_license_checksums

FILES:${PN} += "${datadir}/plasma/plasmoids/ \
                ${datadir}/krunner/ \
"

RDEPENDS:${PN} += "qtdeclarative-qmlplugins"
