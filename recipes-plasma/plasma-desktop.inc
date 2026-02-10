# SPDX-FileCopyrightText: 2023 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma for the Desktop"
HOMEPAGE = "https://invent.kde.org/plasma/plasma-desktop"
LICENSE = "(LGPL-2.1-only | LGPL-3.0-only | LicenseRef-KDE-Accepted-LGPL) & (GPL-2.0-only | GPL-3.0-only | LicenseRef-KDE-Accepted-GPL)"

DEPENDS += " \
    kwayland \
    libplasma \
    plasma-workspace \
    qtwayland-native \
    libxkbfile \
    libaccounts-qt \
    kaccounts-integration \
    intltool-native \
"

inherit cmake_plasma
inherit reuse_license_checksums

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
    ${datadir}/accounts/* \
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
