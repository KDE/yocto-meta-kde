# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KWeatherCore"
DESCRIPTION = "Library to facilitate retrieval of weather information including forecasts and alerts"
HOMEPAGE = "https://invent.kde.org/libraries/kweathercore"
LICENSE = "LGPL-2.0-or-later"
PR = "r0"

DEPENDS += "kholidays \
            ki18n \
            qtlocation \
"

inherit cmake_kdeapp
inherit reuse_license_checksums
