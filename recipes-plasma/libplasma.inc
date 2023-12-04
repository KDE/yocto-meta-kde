# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2018 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020-2023 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Plasma library and runtime components"
HOMEPAGE = "https://invent.kde.org/plasma/libplasma"
LICENSE = "LGPL-2.1-only"
LIC_FILES_CHKSUM = "file://LICENSES/LGPL-2.1-only.txt;md5=fabba2a3bfeb22a6483d44e9ae824d3f"
PR = "r0"

DEPENDS = " \
    qtbase \
    plasma-activities \
    karchive \
    kcmutils \
    kcmutils-native \
    kconfig \
    kconfig-native \
    kconfigwidgets \
    kdbusaddons \
    kdeclarative \
    kglobalaccel \
    kguiaddons \
    kiconthemes \
    kio \
    kcoreaddons-native \
    kauth-native \
    kservice \
    ksvg \
    kwindowsystem \
    kxmlgui \
    knotifications \
    kpackage \
    kpackage-native \
    kwayland \
    kirigami \
    gzip-native \
    qtwayland-native \
"

inherit cmake_plasma
inherit kf6-ki18n
inherit kf6-kdoctools

FILES:${PN} += " \
    ${libdir}/plugins/*.so \
    ${libdir}/plugins/kf6/kirigami/platform/KirigamiPlasmaStyle.so \
    ${libdir}/plugins/kpackage/packagestructure/*.so \
    ${libdir}/plugins/plasma/scriptengines/*.so \
    ${libdir}/plugins/kf6/packagestructure/* \
    ${libdir}/qml/org/kde/plasma/accessdenied/* \
    ${libdir}/qml/org/kde/plasma/*  \
    ${libdir}/qml/org/kde/styles/Plasma/*  \
    ${libdir}/qml/org/kde/kirigami/* \
    ${libdir}/qml/QtQuick/Controls.2/Plasma \
    ${libdir}/qml/QtQuick/Controls/Styles/Plasma \
    ${datadir}/plasma/services/*.operations \
    ${datadir}/plasma/desktoptheme/air/* \
    ${datadir}/plasma/desktoptheme/air/*/* \
    ${datadir}/plasma/desktoptheme/breeze-dark/* \
    ${datadir}/plasma/desktoptheme/breeze-dark/*/* \
    ${datadir}/plasma/desktoptheme/breeze-light/* \
    ${datadir}/plasma/desktoptheme/breeze-light/*/* \
    ${datadir}/plasma/desktoptheme/default/* \
    ${datadir}/plasma/desktoptheme/default/*/* \
    ${datadir}/plasma/desktoptheme/oxygen/* \
    ${datadir}/plasma/desktoptheme/oxygen/*/* \
"
