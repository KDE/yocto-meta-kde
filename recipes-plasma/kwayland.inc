# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Qt-style API to interact with the wayland-client and wayland-server API"
HOMEPAGE = "https://api.kde.org/frameworks/kwayland/html/index.html"
LICENSE = "MIT & MIT-CMU & BSD-3-Clause & (LGPL-2.1-only | LGPL-3.0-only | LicenseRef-KDE-Accepted-LGPL)"
PR = "r0"

DEPENDS = " \
    plasma-wayland-protocols \
    qtbase \
    qtwayland \
    qtwayland-native \
    wayland-native \
    wayland \
    wayland-protocols \
    virtual/egl \
"

inherit cmake_plasma
inherit reuse_license_checksums
