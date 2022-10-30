# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Marble"
DESCRIPTION = "Marble is a virtual globe and world atlas."
HOMEPAGE = "https://marble.kde.org/"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://LICENSES/LGPL-2.1-only.txt;md5=41890f71f740302b785c27661123bff5"
PR = "r0"

DEPENDS += " \
    gpsd \
    kcrash \
    ki18n \
    kio \
    knewstuff \
    kparts \
    phonon \
    protobuf \
    protobuf-native \
    qtlocation \
    qtserialport \
"

inherit cmake_kdeapp
inherit kcoreaddons
inherit kconfig
inherit kauth
inherit mime-xdg

EXTRA_OECMAKE += "-DBUILD_TOUCH=ON"

# note: marble-maps is the dedicated mobile version
PACKAGES += " \
    ${PN}-desktop \
    ${PN}-shared \
"

FILES_SOLIBSDEV = ""
FILES:${PN} = " \
    ${bindir}/marble-maps \
    ${datadir}/applications/org.kde.marble-maps.desktop \
"

FILES:${PN}-shared = " \
    ${datadir}/knsrcfiles \
    ${libdir}/libmarbledeclarative.so \
    ${libdir} \
    ${datadir}/marble/data/ \
    ${datadir}/icons \
    ${datadir} \
"

FILES:${PN}-desktop = " \
    ${bindir}/marble \
    ${bindir}/marble-qt \
    ${datadir}/applications/org.kde.marble.desktop \
    ${datadir}/applications/org.kde.marble-qt.desktop \
    ${datdair}/kxmlgui5 \
"

FILES:${PN}-dev += " \
    ${datadir}/knsrcfiles \
    ${libdir}/libastro.so \
    ${libdir}/libmarblewidget-qt5.so \
"

RDEPENDS:${PN} += " \
    ${PN}-shared \
"

RDEPENDS:${PN}-desktop += " \
    ${PN}-shared \
"
