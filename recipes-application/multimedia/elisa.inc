# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Elisa"
DESCRIPTION = "Elisa music player"
HOMEPAGE = "https://apps.kde.org/de/elisa"
LICENSE = "LGPL-3.0"
LIC_FILES_CHKSUM = "file://LICENSES/LGPL-3.0-only.txt;md5=c51d3eef3be114124d11349ca0d7e117"
PR = "r0"

DEPENDS += " \
    baloo \
    qtbase \
    qtdeclarative \
    qtmultimedia \
    kirigami \
    ki18n \
    kdeclarative \
    kfilemetadata \
    kxmlgui \
    kconfigwidgets \
    kcrash \
    kdbusaddons \
"

SRC_URI = "git://invent.kde.org/multimedia/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kdeapp
inherit kcoreaddons
inherit kconfig
inherit kauth
inherit mime-xdg
