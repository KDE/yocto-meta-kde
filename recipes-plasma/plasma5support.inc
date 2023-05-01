# SPDX-FileCopyrightText: 2023 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Support components for porting from KF5/Qt5 to KF6/Qt6"
HOMEPAGE = "https://invent.kde.org/plasma/plasma5support"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-only.txt;md5=93e64b4a83c7e441e48bbdeeea05c977"
PR = "r0"

DEPENDS = " \
    kconfig \
    kcoreaddons \
    ki18n \
    kio \
    kservice \
    kxmlgui \
"

inherit cmake_plasma

FILES:${PN} += " \
    ${libdir}/qml/org/kde/plasma/plasma5support/* \
"
