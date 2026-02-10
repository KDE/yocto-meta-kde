# SPDX-FileCopyrightText: 2023 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Support components for porting from KF5/Qt5 to KF6/Qt6"
HOMEPAGE = "https://invent.kde.org/plasma/plasma5support"
LICENSE = "GPL-2.0-or-later"
PR = "r0"

DEPENDS = " \
    kconfig \
    kcoreaddons \
    ki18n \
    kio \
    kidletime \
    kservice \
    kxmlgui \
    libksysguard \
    kunitconversion \
    kholidays \
"

inherit cmake_plasma
inherit reuse_license_checksums

FILES:${PN} += " \
    ${libdir}/qml/org/kde/plasma/plasma5support/* \
    ${datadir}/plasma/weather_legacy \
"
