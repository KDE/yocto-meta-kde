# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Layer Shell Qt"
DESCRIPTION = "Qt component to allow applications to make use of the Wayland wl-layer-shell protocol"
HOMEPAGE = "https://invent.kde.org/plasma/layer-shell-qt"
LICENSE = "BSD-3-Clause & MIT & LGPL-3.0-or-later"
LIC_FILES_CHKSUM = " \
    file://LICENSES/BSD-3-Clause.txt;md5=f225922a2c12dfa5218fb70c49db3ea6 \
    file://LICENSES/MIT.txt;md5=7dda4e90ded66ab88b86f76169f28663 \
    file://LICENSES/LGPL-3.0-or-later.txt;md5=3000208d539ec061b899bce1d9ce9404 \
"
PR = "r0"

DEPENDS = " \
    qtwayland \
    qtwayland-native \
    wayland-native \
    wayland \
    wayland-protocols \
"

inherit cmake_plasma
