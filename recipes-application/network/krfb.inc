# SPDX-FileCopyrightText: 2024 Guillaume Champagne <champagne.guillaume.c@gmail.com>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KRfb"
SUMMARY = "Small server for the RFB protocol (vnc)"
HOMEPAGE = "https://invent.kde.org/network/krfb"
LICENSE = "GPL-2.0-only"
PR = "r0"

DEPENDS = " \
    kconfig \
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
    qtbase \
    qtwayland \
    qtwayland-native \
"

inherit cmake_kdeapp
inherit reuse_license_checksums

RDEPENDS:${PN} += " \
    xdg-desktop-portal \
"
