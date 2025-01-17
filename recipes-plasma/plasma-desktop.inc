# SPDX-FileCopyrightText: 2023 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma for the Desktop"
HOMEPAGE = "https://invent.kde.org/plasma/plasma-desktop"
LICENSE = "(LGPL-2.1-only | LGPL-3.0-only | LicenseRef-KDE-Accepted-LGPL) & (GPL-2.0-only | GPL-3.0-only | LicenseRef-KDE-Accepted-GPL)"
LIC_FILES_CHKSUM = " \
    file://LICENSES/GPL-2.0-only.txt;md5=9e2385fe012386d34dcc5c9863070881 \
    file://LICENSES/GPL-2.0-or-later.txt;md5=9e2385fe012386d34dcc5c9863070881 \
    file://LICENSES/GPL-3.0-only.txt;md5=49fc03046e56a282c0c743b5d3a55b7c \
    file://LICENSES/LGPL-2.1-only.txt;md5=147a320ed8b16b036829a0c71d424153 \
    file://LICENSES/LGPL-3.0-only.txt;md5=8d51f5b5fd447f7a1040c3dc9f0a8de6 \
    file://LICENSES/LicenseRef-KDE-Accepted-GPL.txt;md5=b4c280013bbbadfbe92219498dc5228c \
"

DEPENDS += " \
    kwayland \
    libplasma \
    plasma-workspace \
    qtwayland-native \
    libxkbfile \
"

inherit cmake_plasma

EXTRA_OECMAKE += " \
    -DBUILD_KCM_MOUSE_X11=OFF \
    -DBUILD_KCM_TOUCHPAD_X11=OFF \
    -DBUILD_KCM_TABLET=OFF \
"

FILES:${PN} += " \
    ${datadir}/plasma/desktoptheme/* \
    ${datadir}/plasma/emoji/* \
    ${datadir}/plasma/plasmoids/* \
    ${datadir}/plasma/packages/* \
    ${datadir}/plasma/services/* \
    ${datadir}/plasma/layout-templates/* \
    ${datadir}/plasma/shells/org.kde.plasma.desktop/* \
    ${datadir}/solid/devices/* \
    ${datadir}/kglobalaccel/* \
    ${datadir}/kcmkeys/* \
    ${datadir}/kcmmouse/* \
    ${datadir}/kcmsolidactions/* \
    ${datadir}/kcm_recentFiles/* \
    ${datadir}/sddm/themes/breeze/* \
    ${libdir}/qml/org/kde/plasma/activityswitcher/* \
    ${libdir}/qml/org/kde/plasma/emoji/* \
    ${libdir}/qml/org/kde/plasma/private/pager/* \
    ${libdir}/qml/org/kde/plasma/private/taskmanager/* \
    ${libdir}/qml/org/kde/plasma/private/kimpanel/* \
    ${libdir}/qml/org/kde/plasma/private/trash/* \
    ${libdir}/qml/org/kde/plasma/private/showdesktop/* \
    ${libdir}/qml/org/kde/plasma/private/kcm_keyboard/* \
    ${libdir}/qml/org/kde/private/desktopcontainment/* \
"

INSANE_SKIP:${PN} = "dev-so"

RDEPENDS:${PN} += " \
    gawk \
    kded \
    plasma-nano \
    kirigami \
    kirigami-addons \
    qqc2-desktop-style \
"
