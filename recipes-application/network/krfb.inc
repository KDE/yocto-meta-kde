# SPDX-FileCopyrightText: 2024 Guillaume Champagne <champagne.guillaume.c@gmail.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KDE Desktop Sharing"
DESCRIPTION = "Small server for the RFB protocol (vnc)"
HOMEPAGE = "https://invent.kde.org/network/krfb"
LICENSE = "GPL-2.0-or-later"

DEPENDS += "kconfig \
            kconfig-native \
            kdbusaddons \
            kdnssd \
            knotifications \
            kpipewire \
            kstatusnotifieritem \
            kwallet \
            kwidgetsaddons \
            kwindowsystem \
            kxmlgui \
            libvncserver \
            qtwayland \
            qtwayland-native \
"

inherit cmake_kdeapp
inherit reuse_license_checksums

RDEPENDS:${PN} += "xdg-desktop-portal"
