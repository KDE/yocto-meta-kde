# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KWayland"
DESCRIPTION = "KWayland provides a Qt-style Client and Server library wrapper for the Wayland libraries"
HOMEPAGE = "https://invent.kde.org/plasma/kwayland"
LICENSE = "MIT & MIT-CMU & BSD-3-Clause & (LGPL-2.1-only | LGPL-3.0-only | LicenseRef-KDE-Accepted-LGPL)"

DEPENDS += "plasma-wayland-protocols \
            qtwayland \
            qtwayland-native \
            virtual/egl \
            wayland \
            wayland-native \
            wayland-protocols \
"

inherit cmake_plasma
inherit reuse_license_checksums
