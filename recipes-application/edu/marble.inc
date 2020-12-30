# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Marble"
DESCRIPTION = "Marble is a virtual globe and world atlas."
HOMEPAGE = "https://marble.kde.org/"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=e9b5891877660f283be4bc396de0570f"
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

SRC_URI = "git://invent.kde.org/education/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kdeapp
inherit kcoreaddons
inherit kconfig
inherit kauth
inherit mime-xdg

FILES_SOLIBSDEV = ""
FILES_${PN} += " \
    ${datadir}/knsrcfiles \
    ${libdir}/libmarbledeclarative.so \
"

FILES_${PN}-dev += " \
    ${datadir}/knsrcfiles \
    ${libdir}/libastro.so \
    ${libdir}/libmarblewidget-qt5.so \
"
