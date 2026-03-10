# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Plasma Nano"
DESCRIPTION = "A minimal plasma shell package intended for embedded devices"
HOMEPAGE = "https://invent.kde.org/plasma/plasma-nano"
LICENSE = "MIT & LGPL-2.0-or-later & GPL-2.0-or-later"

DEPENDS += "kitemmodels \
            kwayland \
            kwindowsystem \
            libplasma \
            qtdeclarative \
"

inherit cmake_plasma
inherit reuse_license_checksums

FILES:${PN} += "${libdir}/qml/org/kde/plasma/ \
                ${datadir}/plasma/shells/org.kde.plasma.nano/ \
                ${datadir}/plasma/packages/org.kde.plasma.nano.desktoptoolbox/ \
"

RDEPENDS:${PN} += "breeze \
                   plasma-workspace \
                   qqc2-desktop-style \
                   qtdeclarative \
"
