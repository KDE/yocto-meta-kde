# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KOSMIndoorMap"
SUMMARY = "OSM multi-floor indoor map renderer"
HOMEPAGE = "https://invent.kde.org/libraries/kosmindoormap"
LICENSE = "LGPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://LICENSES/LGPL-2.0-or-later.txt;md5=6d2d9952d88b50a51a5c73dc431d06c7"
PR = "r0"

SRC_URI:append = " file://0001-Fix-reproducible-builds.patch"

DEPENDS += " \
    qtdeclarative \
    ki18n \
    kopeninghours \
    kpublictransport \
    bison-native \
"

inherit cmake_kdeapp
