# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma Nano"
SUMMARY = "A minimal plasma shell package intended for embedded devices"
HOMEPAGE = "https://invent.kde.org/plasma/plasma-nano"
LICENSE = "MIT & LGPL-2.0-or-later & GPL-2.0-or-later"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    kwayland \
    kitemmodels \
    kwindowsystem \
    libplasma \
"

inherit cmake_plasma
inherit reuse_license_checksums

FILES:${PN} += " \
    ${libdir}/qml/org/kde/plasma/ \
    ${datadir}/plasma/shells/org.kde.plasma.nano/ \
    ${datadir}/plasma/packages/org.kde.plasma.nano.desktoptoolbox/ \
"

RDEPENDS:${PN} += " \
    qtdeclarative \
    plasma-workspace \
    breeze \
    qqc2-desktop-style \
"
