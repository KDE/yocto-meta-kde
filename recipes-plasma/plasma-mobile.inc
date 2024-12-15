# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020-2023 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma shell for mobile devices"
HOMEPAGE = "https://invent.kde.org/plasma/plasma-mobile"
LICENSE = "(LGPL-2.1-only | LGPL-3.0-only | LicenseRef-KDE-Accepted-LGPL) & (GPL-2.0-only | GPL-3.0-only | LicenseRef-KDE-Accepted-GPL)"
LIC_FILES_CHKSUM = " \
    file://LICENSES/GPL-2.0-only.txt;md5=9e2385fe012386d34dcc5c9863070881 \
    file://LICENSES/GPL-2.0-or-later.txt;md5=9e2385fe012386d34dcc5c9863070881 \
    file://LICENSES/GPL-3.0-only.txt;md5=49fc03046e56a282c0c743b5d3a55b7c \
    file://LICENSES/LGPL-2.1-only.txt;md5=147a320ed8b16b036829a0c71d424153 \
    file://LICENSES/LGPL-3.0-only.txt;md5=1a523aee720780ffc0705c5bf17a6421 \
    file://LICENSES/LicenseRef-KDE-Accepted-GPL.txt;md5=b4c280013bbbadfbe92219498dc5228c \
"
PR = "r0"

DEPENDS += " \
    kdbusaddons \
    kglobalaccel \
    kio \
    kirigami-addons \
    kjobwidgets \
    knotifications \
    kpackage \
    kwayland \
    libplasma \
    modemmanager-qt \
    networkmanager-qt \
    plasma-workspace \
    qcoro \
"

inherit cmake_plasma

FILES:${PN} += " \
    ${datadir}/kpackage/genericqml/org.kde.phone.dialer/* \
    ${datadir}/kpackage/kcms/kcm_mobileshell/* \
    ${datadir}/kwin/effects/* \
    ${datadir}/kwin/scripts/* \
    ${datadir}/plasma/look-and-feel/* \
    ${datadir}/plasma/mobileinitialstart \
    ${datadir}/plasma/plasmoids/* \
    ${datadir}/plasma/quicksettings/* \
    ${datadir}/plasma/shells/org.kde.plasma.mobileshell/* \
    ${datadir}/telepathy/clients/Plasma.Dialer.client \
    ${datadir}/wallpapers/org.kde.plasma.phone.lockers/* \
    ${datadir}/wayland-sessions/*.desktop \
    ${datadir}/plasma-mobile-apn-info \
    ${libdir}/plugins/kwin/effects/plugins/* \
    ${libdir}/plugins/plasma/kcms/systemsettings/* \
    ${libdir}/qml/QtQuick/VirtualKeyboard/Styles/Plasma/* \
    ${libdir}/qml/org/kde/plasma/mm/* \
    ${libdir}/qml/org/kde/plasma/mobileinitialstart/* \
    ${libdir}/qml/org/kde/plasma/private/kpeoplehelper/* \
    ${libdir}/qml/org/kde/plasma/private/mobilehomescreencomponents/* \
    ${libdir}/qml/org/kde/plasma/private/mobileshell/* \
    ${libdir}/qml/org/kde/plasma/quicksetting/flashlight/* \
    ${libdir}/qml/org/kde/plasma/quicksetting/nightcolor/* \
    ${libdir}/qml/org/kde/plasma/quicksetting/powermenu/* \
    ${libdir}/qml/org/kde/plasma/quicksetting/record/* \
    ${libdir}/qml/org/kde/plasma/quicksetting/screenrotation/* \
    ${libdir}/qml/org/kde/plasma/quicksetting/screenshot/* \
    ${libdir}/qml/org/kde/private/mobile/homescreen/* \
"

RDEPENDS:${PN} += " \
    breeze \
    kded \
    kirigami \
    kirigami-addons \
    plasma-nano \
    qqc2-breeze-style \
"
