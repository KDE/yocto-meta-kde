# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KRdp"
SUMMARY = "Library and examples for creating an RDP server"
HOMEPAGE = "https://invent.kde.org/plasma/krdp"
LICENSE = "LGPL-2.1-only | LGPL-3.0-only"
LIC_FILES_CHKSUM = " \
    file://LICENSES/LGPL-2.1-only.txt;md5=41890f71f740302b785c27661123bff5 \
    file://LICENSES/LGPL-3.0-only.txt;md5=852ecadc0ac7e6f4d7144d5544a3815b \
"
PR = "r0"

DEPENDS = " \
    freerdp \
    qtbase \
    qtwayland \
    qtwayland-native \
    qtkeychain \
    kpipewire \
    kstatusnotifieritem \
    libxkbcommon \
    plasma-wayland-protocols \
"

inherit cmake_kdeapp kf6-kconfig kf6-kcmutils systemd

RDEPENDS:${PN} += " \
    xdg-desktop-portal \
"

SYSTEMD_SERVICE:${PN} = "app-org.kde.krdpserver.service"
SYSTEMD_AUTO_ENABLE:${PN} = "disable"

FILES:${PN} += " \
    ${libdir}/plugins/plasma/kcms/systemsettings/* \
"
