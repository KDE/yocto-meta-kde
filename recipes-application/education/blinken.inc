# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Blinken"
DESCRIPTION = "Memory Enhancement Game"
HOMEPAGE = "https://edu.kde.org/blinken/"
LICENSE = "GPL-2.0"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-or-later.txt;md5=9e2385fe012386d34dcc5c9863070881"
PR = "r0"

DEPENDS += " \
    kcrash \
    ki18n \
    kio \
    phonon \
"

inherit cmake_kdeapp
inherit kcoreaddons
inherit kconfig
inherit kauth
inherit mime-xdg
