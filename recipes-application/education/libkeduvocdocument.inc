# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KEduVocDocument"
DESCRIPTION = "Library for reading from/writing to the KVTML format."
HOMEPAGE = "https://edu.kde.org/khangman/"
LICENSE = "GPL-2.0-or-later"
PR = "r0"

DEPENDS += " \
    karchive \
    ki18n \
    kio \
"

inherit cmake_kdeapp
inherit kf6-kconfig
inherit kf6-kauth
inherit reuse_license_checksums
