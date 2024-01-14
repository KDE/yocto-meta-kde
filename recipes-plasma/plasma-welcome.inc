# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Welcome Center"
HOMEPAGE = "https://invent.kde.org/plasma/plasma-welcome"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-only.txt;md5=93e64b4a83c7e441e48bbdeeea05c977"
PR = "r0"

DEPENDS = " \
    kcmutils \
    kconfig \
    kconfigwidgets \
    kdbusaddons \
    ki18n \
    kio \
    kservice \
    kirigami \
    kirigami-addons \
    kjobwidgets \
    knewstuff \
    ksvg \
    kwindowsystem \
    libplasma \
    qtbase \
    qtdeclarative \
"

inherit cmake_plasma
inherit mime-xdg
