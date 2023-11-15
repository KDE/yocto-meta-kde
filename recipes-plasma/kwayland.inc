# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

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

require kwayland_metainfo.inc
inherit kf6-cmake
inherit reuse_license_checksums
