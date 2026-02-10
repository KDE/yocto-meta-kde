# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library to facilitate retrieval of weather information including forecasts and alerts"
HOMEPAGE = "https://invent.kde.org/libraries/kweathercore"
LICENSE = "LGPL-2.0-or-later"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtlocation \
    ki18n \
    kholidays \
"

inherit cmake_kdeapp
inherit reuse_license_checksums
