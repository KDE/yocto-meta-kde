# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KOSMIndoorMap"
DESCRIPTION = "OSM multi-floor indoor map renderer"
HOMEPAGE = "https://invent.kde.org/libraries/kosmindoormap"
LICENSE = "LGPL-2.0-or-later"

DEPENDS += "bison-native \
            ki18n \
            kopeninghours \
            kpublictransport \
            qtdeclarative \
"

inherit cmake_kdeapp
inherit kf6-kconfig
inherit reuse_license_checksums
