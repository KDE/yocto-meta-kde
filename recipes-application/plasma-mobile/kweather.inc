# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KWeather"
DESCRIPTION = "Weather application for Plasma Mobile"
HOMEPAGE = "https://invent.kde.org/utilities/kweather"
LICENSE = "GPL-2.0-or-later"

DEPENDS += "ki18n \
            kirigami \
            kirigami-addons \
            knotifications \
            kquickcharts \
            kweathercore \
            libplasma \
            qtcharts \
            qtdeclarative \
"

inherit cmake_kdeapp
inherit kf6-kconfig
inherit kf6-kcoreaddons
inherit kf6-kauth
inherit mime-xdg
inherit reuse_license_checksums

FILES:${PN} += "${datadir}/plasma/plasmoids/"

RDEPENDS:${PN} += "qtcharts-qmlplugins \
                   qtdeclarative-qmlplugins \
"
