# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KOpeningHours"
DESCRIPTION = "Library for parsing and evaluating OSM opening hours expressions"
HOMEPAGE = "https://invent.kde.org/libraries/kopeninghours"
LICENSE = "LGPL-2.0-or-later"
PR = "r0"

DEPENDS += "bison-native \
            boost \
            flex \
            kholidays \
            ki18n \
"

inherit cmake_kdeapp
inherit python3native
inherit reuse_license_checksums

FILES:${PN} += "${libdir}/${PYTHON_DIR}/site-packages/PyKOpeningHours/*"
