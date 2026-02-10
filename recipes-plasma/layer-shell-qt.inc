# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Layer Shell Qt"
DESCRIPTION = "Qt component to allow applications to make use of the Wayland wl-layer-shell protocol"
HOMEPAGE = "https://invent.kde.org/plasma/layer-shell-qt"
LICENSE = "BSD-3-Clause & MIT & LGPL-3.0-or-later"
PR = "r0"

DEPENDS = " \
    qtwayland \
    qtwayland-native \
    wayland-native \
    wayland \
    wayland-protocols \
"

inherit cmake_plasma
inherit reuse_license_checksums

FILES:${PN} += " \
    ${libdir}/qml/org/kde/layershell/* \
"
