# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KOpeningHours"
SUMMARY = "Library for parsing and evaluating OSM opening hours expressions"
HOMEPAGE = "https://invent.kde.org/libraries/kopeninghours"
LICENSE = "LGPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://LICENSES/LGPL-2.0-or-later.txt;md5=6d2d9952d88b50a51a5c73dc431d06c7"
PR = "r0"

DEPENDS += " \
    qtbase \
    kholidays \
    ki18n \
    flex \
    bison-native \
    boost \
"

inherit cmake_kdeapp
inherit python3native

FILES:${PN} += " \
    ${libdir}/${PYTHON_DIR}/site-packages/PyKOpeningHours/* \
"
