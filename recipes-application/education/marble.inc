# SPDX-FileCopyrightText: 2020-2025 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Marble"
DESCRIPTION = "Marble is a virtual globe and world atlas."
HOMEPAGE = "https://marble.kde.org/"
LICENSE = "LGPL-2.1-only"
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
inherit kf6-kcoreaddons
inherit kf6-kconfig
inherit kf6-kauth
inherit mime
inherit mime-xdg
inherit reuse_license_checksums

EXTRA_OECMAKE += "-DBUILD_TOUCH=ON"

# note: marble-maps is the dedicated mobile version
PACKAGES += " \
    ${PN}-desktop \
    ${PN}-shared \
"

FILES_SOLIBSDEV = ""
FILES:${PN} = " \
    ${bindir}/marble-maps \
    ${datadir}/applications/org.kde.marble.maps.desktop \
"

INSANE_SKIP:${PN}-shared = "dev-so"
FILES:${PN}-shared = " \
    ${datadir}/knsrcfiles \
    ${libdir}/libmarbledeclarative.so \
    ${libdir} \
    ${datadir}/marble/data/ \
    ${datadir}/icons \
    ${datadir}/kxmlgui5 \
    ${datadir}/mime/packages/*.xml \
"

FILES:${PN}-desktop = " \
    ${bindir}/marble \
    ${bindir}/marble-behaim \
    ${datadir}/applications/org.kde.marble.desktop \
    ${datadir}/applications/org.kde.marble.behaim.desktop \
    ${datadir}/applications/marble_*.desktop \
"

FILES:${PN}-dev += " \
    ${datadir}/knsrcfiles \
    ${libdir}/libastro.so \
"

RDEPENDS:${PN} += " \
    ${PN}-shared \
"

RDEPENDS:${PN}-desktop += " \
    ${PN}-shared \
"
