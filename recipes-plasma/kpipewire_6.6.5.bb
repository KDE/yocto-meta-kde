# SPDX-FileCopyrightText: 2022 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KPipeWire"
DESCRIPTION = "Components relating to Flatpak 'pipewire' use in Plasma"
HOMEPAGE = "https://invent.kde.org/plasma/kpipewire"
LICENSE = "LGPL-2.1-only | LGPL-3.0-only | LicenseRef-KDE-Accepted-LGPL"

DEPENDS += "ffmpeg \
            kwayland \
            libepoxy \
            libva \
            pipewire \
            qtdeclarative \
            qtwayland-native \
"

inherit cmake_plasma
inherit reuse_license_checksums
require recipes-plasma/common/plasma_src.inc

FILES:${PN} += "${libdir}/qml/org/kde/pipewire/* \
                ${datadir}/zsh/site-functions/* \
"

RDEPENDS:${PN} += "pipewire"
