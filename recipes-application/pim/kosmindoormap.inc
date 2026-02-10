# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KOSMIndoorMap"
SUMMARY = "OSM multi-floor indoor map renderer"
HOMEPAGE = "https://invent.kde.org/libraries/kosmindoormap"
LICENSE = "LGPL-2.0-or-later"
PR = "r0"

DEPENDS += " \
    qtdeclarative \
    ki18n \
    kopeninghours \
    kpublictransport \
    bison-native \
"

inherit cmake_kdeapp
inherit kf6-kconfig
inherit reuse_license_checksums
