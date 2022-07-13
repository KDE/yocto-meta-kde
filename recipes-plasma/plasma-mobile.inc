# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020-2022 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma Phone Components"
HOMEPAGE = "https://community.kde.org/Plasma/Mobile/Code"
LICENSE = "(LGPL-2.1 | LGPL-3.0 | LicenseRef-KDE-Accepted-LGPL) & (GPL-2.0 | GPL-3.0 | LicenseRef-KDE-Accepted-GPL)"
LIC_FILES_CHKSUM = " \
    file://LICENSES/GPL-2.0-only.txt;md5=9e2385fe012386d34dcc5c9863070881 \
    file://LICENSES/GPL-2.0-or-later.txt;md5=9e2385fe012386d34dcc5c9863070881 \
    file://LICENSES/GPL-3.0-only.txt;md5=49fc03046e56a282c0c743b5d3a55b7c \
    file://LICENSES/LGPL-2.1-only.txt;md5=147a320ed8b16b036829a0c71d424153 \
    file://LICENSES/LGPL-3.0-only.txt;md5=8d51f5b5fd447f7a1040c3dc9f0a8de6 \
    file://LICENSES/LicenseRef-KDE-Accepted-GPL.txt;md5=b4c280013bbbadfbe92219498dc5228c \
"
PR = "r0"

DEPENDS = " \
    telepathy-qt \
    libphonenumber \
    kwayland \
    plasma-framework \
    plasma-workspace \
    kpeople \
    kwin \
    gstreamer1.0 \
    modemmanager-qt \
    networkmanager-qt \
"

inherit cmake_plasma

FILES:${PN} += " \
    ${datadir}/kpackage/genericqml/org.kde.phone.dialer/* \
    ${datadir}/kpackage/kcms/kcm_mobileshell/* \
    ${datadir}/kwin/scripts/org.kde.phone.multitasking/* \
    ${datadir}/plasma/look-and-feel/org.kde.plasma.phone/* \
    ${datadir}/plasma/plasmoids/* \
    ${datadir}/plasma/quicksettings/* \
    ${datadir}/plasma/shells/org.kde.plasma.phone/* \
    ${datadir}/plasma/shells/org.kde.plasma.phoneshell/* \
    ${datadir}/telepathy/clients/Plasma.Dialer.client \
    ${datadir}/wallpapers/org.kde.plasma.phone.lockers/* \
    ${datadir}/wayland-sessions/*.desktop \
    ${libdir}/qml/QtQuick/VirtualKeyboard/Styles/Plasma/* \
    ${libdir}/qml/org/kde/plasma/mm/* \
    ${libdir}/qml/org/kde/plasma/private/kpeoplehelper/* \
    ${libdir}/qml/org/kde/plasma/private/mobilehomescreencomponents/* \
    ${libdir}/qml/org/kde/plasma/private/mobileshell/* \
    ${libdir}/qml/org/kde/plasma/quicksetting/flashlight/* \
    ${libdir}/qml/org/kde/plasma/quicksetting/nightcolor/* \
    ${libdir}/qml/org/kde/plasma/quicksetting/powermenu/* \
    ${libdir}/qml/org/kde/plasma/quicksetting/screenrotation/* \
    ${libdir}/qml/org/kde/plasma/quicksetting/screenshot/* \
"

RDEPENDS:${PN} += " \
    libqofono \
    kded \
    qtgraphicaleffects \
    qtfeedback \
    plasma-nano \
"
