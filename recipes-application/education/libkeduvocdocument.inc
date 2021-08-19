# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KEduVocDocument"
DESCRIPTION = "Library for reading from/writing to the KVTML format."
HOMEPAGE = "https://edu.kde.org/khangman/"
LICENSE = "GPL-2.0+"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-or-later.txt;md5=9e2385fe012386d34dcc5c9863070881"
PR = "r0"

DEPENDS += " \
    karchive \
    ki18n \
    kio \
"

inherit cmake_kdeapp
inherit kconfig
inherit kauth
