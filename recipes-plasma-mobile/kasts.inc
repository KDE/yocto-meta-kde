# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Kasts"
DESCRIPTION = "Kasts is a convergent podcast application."
HOMEPAGE = "https://invent.kde.org/plasma-mobile/kasts"
LICENSE = "GPL-3.0"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-3.0-or-later.txt;md5=8da5784ab1c72e63ac74971f88658166"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    qtquickcontrols2 \
    qtsvg \
    qtmultimedia \
    syndication \
    ki18n \
    taglib \
    threadweaver \
    networkmanager-qt \
    qtkeychain \
    kirigami \
"

inherit cmake_kdeapp
inherit kconfig
inherit kcoreaddons

FILES_SOLIBSDEV = ""

FILES:${PN} += " \
    ${libdir}/libKastsSolidExtras.so \
"
