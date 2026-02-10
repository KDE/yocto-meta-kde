# SPDX-FileCopyrightText: 2022 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KPipeWire"
HOMEPAGE = "https://invent.kde.org/plasma/kpipewire"
LICENSE = "LGPL-2.1-only | LGPL-3.0-only | LicenseRef-KDE-Accepted-LGPL"
PR = "r0"

DEPENDS = " \
    libepoxy \
    qtdeclarative \
    qtwayland-native \
    pipewire \
    kwayland \
    ffmpeg \
    libva \
"

inherit cmake_plasma
inherit reuse_license_checksums

FILES:${PN} += " \
    ${libdir}/qml/org/kde/pipewire/* \
    ${datadir}/zsh/site-functions/* \
"

RDEPENDS:${PN} += " \
    pipewire \
"
