# SPDX-FileCopyrightText: 2023 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Plasma5Support"
DESCRIPTION = "Support components for porting from KF5/Qt5 to KF6/Qt6"
HOMEPAGE = "https://invent.kde.org/plasma/plasma5support"
LICENSE = "GPL-2.0-or-later"
PR = "r0"

DEPENDS += "kconfig \
            kcoreaddons \
            kholidays \
            ki18n \
            kidletime \
            kio \
            kservice \
            kunitconversion \
            kxmlgui \
            libksysguard \
"

inherit cmake_plasma
inherit reuse_license_checksums

FILES:${PN} += "${libdir}/qml/org/kde/plasma/plasma5support/* \
                ${datadir}/plasma/weather_legacy \
"
