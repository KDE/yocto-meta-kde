# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020-2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "XDG Desktop Portal KDE"
HOMEPAGE = ""
LICENSE = "LGPL-2.1-only & GPL-2.0-or-later"
PR = "r0"

DEPENDS += " \
    kcoreaddons \
    knotifications \
    kwayland \
    kwidgetsaddons \
    kirigami \
    kio \
    kdeclarative \
    kstatusnotifieritem \
    libplasma \
    pipewire \
    qtwayland-native \
"

inherit cmake_plasma
inherit reuse_license_checksums

FILES:${PN} += " \
    ${datadir}/xdg-desktop-portal \
"

RDEPENDS:${PN} += " \
    xdg-desktop-portal \
"
