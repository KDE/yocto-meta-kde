# SPDX-FileCopyrightText: 2023 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Support components for porting from KF5/Qt5 to KF6/Qt6"
HOMEPAGE = "https://invent.kde.org/plasma/plasma5support"
LICENSE = "GPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-or-later.txt;md5=fed54355545ffd980b814dab4a3b312c"
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

FILES:${PN} += " \
    ${libdir}/qml/org/kde/plasma/plasma5support/* \
    ${datadir}/plasma/weather_legacy \
"
