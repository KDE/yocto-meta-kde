# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Alligator"
DESCRIPTION = "Kirigami-based RSS reader"
HOMEPAGE = "https://invent.kde.org/plasma-mobile/alligator"
LICENSE = "GPL-3.0-only"

DEPENDS += "ki18n \
            kirigami \
            kirigami-addons \
            libplasma \
            qtdeclarative \
            syndication \
"

inherit cmake_kdeapp
inherit kf6_kconfig
inherit kf6_kcoreaddons
inherit reuse_license_checksums
