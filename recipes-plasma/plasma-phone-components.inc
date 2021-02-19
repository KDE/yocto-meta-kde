# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma Phone Components"
HOMEPAGE = "https://community.kde.org/Plasma/Mobile/Code"
LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
PR = "r0"

DEPENDS = " \
    telepathy-qt \
    libphonenumber \
    kwayland \
    plasma-framework \
    kpeople \
    gstreamer1.0 \
"

SRC_URI = "git://invent.kde.org/plasma/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_plasma

FILES_${PN} += " \
    ${libdir}/qml/QtQuick/VirtualKeyboard/Styles/Plasma/* \
    ${libdir}/qml/org/kde/plasma/private/mobileshell/* \
    ${libdir}/qml/org/kde/plasma/private/kpeoplehelper/* \
    ${datadir}/kpackage/genericqml/org.kde.phone.dialer/* \
    ${datadir}/plasma/shells/org.kde.plasma.phone/* \
    ${datadir}/plasma/shells/org.kde.plasma.phoneshell/* \
    ${datadir}/plasma/plasmoids/* \
    ${datadir}/plasma/look-and-feel/org.kde.plasma.phone/* \
    ${datadir}/telepathy/clients/Plasma.Dialer.client \
    ${datadir}/kwin/scripts/org.kde.phone.multitasking/* \
    ${datadir}/wallpapers/org.kde.plasma.phone.lockers/* \
    ${datadir}/wayland-sessions/*.desktop \
"

RDEPENDS_${PN} += " \
    libqofono \
    kded \
    qtgraphicaleffects \
    plasma-nano \
"
