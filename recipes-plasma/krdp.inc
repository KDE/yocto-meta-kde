# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KRdp"
SUMMARY = "Library and examples for creating an RDP server"
HOMEPAGE = "https://invent.kde.org/plasma/krdp"
LICENSE = "LGPL-2.1-only | LGPL-3.0-only"
PR = "r0"

DEPENDS = " \
    freerdp3 \
    qtbase \
    qtwayland \
    qtwayland-native \
    qtkeychain \
    kpipewire \
    kstatusnotifieritem \
    libxkbcommon \
    plasma-wayland-protocols \
"

inherit cmake_kdeapp
inherit kf6-kconfig
inherit kf6-kcmutils
inherit systemd
inherit reuse_license_checksums

RDEPENDS:${PN} += " \
    xdg-desktop-portal \
"

SYSTEMD_SERVICE:${PN} = "app-org.kde.krdpserver.service"
SYSTEMD_AUTO_ENABLE:${PN} = "disable"

FILES:${PN} += " \
    ${libdir}/plugins/plasma/kcms/systemsettings/* \
    ${libdir}/systemd/user-preset/00-krdp.preset \
"
