# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KGamma"
DESCRIPTION = "Adjust your monitor's gamma settings"
HOMEPAGE = "https://invent.kde.org/plasma/kgamma"
LICENSE = "GPL-2.0-or-later"
PR = "r0"

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

INSANE_SKIP:${PN} = "dev-so"
FILES:${PN} += "${libdir}/plugins/plasma/kcminit/kcm_kgamma_init.so"
