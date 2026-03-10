# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020-2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KDE Portal for XDG Desktop"
DESCRIPTION = "A backend implementation for xdg-desktop-portal that is using Qt/KDE"
HOMEPAGE = "https://invent.kde.org/plasma/xdg-desktop-portal-kde"
LICENSE = "LGPL-2.1-only & GPL-2.0-or-later"

DEPENDS += "kcoreaddons \
            kdeclarative \
            kio \
            kirigami \
            knotifications \
            kstatusnotifieritem \
            kwayland \
            kwidgetsaddons \
            libplasma \
            pipewire \
            qtwayland-native \
"

inherit cmake_plasma
inherit reuse_license_checksums

FILES:${PN} += "${datadir}/xdg-desktop-portal"

RDEPENDS:${PN} += "xdg-desktop-portal"
