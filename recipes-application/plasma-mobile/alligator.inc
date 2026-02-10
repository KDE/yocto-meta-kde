# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Kirigami-based RSS reader"
HOMEPAGE = "https://invent.kde.org/plasma-mobile/alligator"
LICENSE = "GPL-3.0-only"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    syndication \
    kirigami \
    kirigami-addons \
    ki18n \
    libplasma \
"

inherit cmake_kdeapp
inherit kf6-kconfig
inherit kf6-kcoreaddons
inherit reuse_license_checksums
