# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Welcome Center"
HOMEPAGE = "https://invent.kde.org/plasma/plasma-welcome"
LICENSE = "GPL-2.0-only"
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
inherit reuse_license_checksums

FILES:${PN} += " \
    ${libdir}/qml/org/kde/plasma/welcome \
"
