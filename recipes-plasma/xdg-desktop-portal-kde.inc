# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020-2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "XDG Desktop Portal KDE"
HOMEPAGE = ""
LICENSE = "LGPL-2.1 & GPL-2.0+"
LIC_FILES_CHKSUM = " \
    file://LICENSES/GPL-2.0-or-later.txt;md5=9e2385fe012386d34dcc5c9863070881 \
    file://LICENSES/LGPL-2.0-or-later.txt;md5=da48810c4ddf8e49efa031294a26b98c \
    file://LICENSES/LGPL-2.1-only.txt;md5=147a320ed8b16b036829a0c71d424153 \
    file://LICENSES/LGPL-3.0-only.txt;md5=8d51f5b5fd447f7a1040c3dc9f0a8de6 \
    file://LICENSES/LicenseRef-KDE-Accepted-LGPL.txt;md5=e4b79a181b6483b37d39a27f4d75e60a \
"
PR = "r0"

DEPENDS += " \
    kcoreaddons \
    knotifications \
    kwayland \
    kwidgetsaddons \
    kirigami \
    kio \
    kdeclarative \
    plasma-framework \
    pipewire \
    qtwayland-native \
"

inherit cmake_plasma

FILES_${PN} += " \
    ${datadir}/xdg-desktop-portal \
"
