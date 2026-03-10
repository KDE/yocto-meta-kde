# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KRdp"
DESCRIPTION = "Library and examples for creating an RDP server"
HOMEPAGE = "https://invent.kde.org/plasma/krdp"
LICENSE = "LGPL-2.1-only | LGPL-3.0-only"

DEPENDS += "freerdp3 \
            kpipewire \
            kstatusnotifieritem \
            libxkbcommon \
            plasma-wayland-protocols \
            qtkeychain \
            qtwayland \
            qtwayland-native \
"

inherit cmake_kdeapp
inherit kf6-kconfig
inherit kf6-kcmutils
inherit systemd
inherit reuse_license_checksums

FILES:${PN} += "${libdir}/plugins/plasma/kcms/systemsettings/* \
                ${libdir}/systemd/user-preset/00-krdp.preset \
"

RDEPENDS:${PN} += "xdg-desktop-portal"

SYSTEMD_SERVICE:${PN} = "app-org.kde.krdpserver.service"
SYSTEMD_AUTO_ENABLE:${PN} = "disable"
