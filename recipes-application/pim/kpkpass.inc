# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KPkPass"
DESCRIPTION = "Apple Wallet Pass reader"
HOMEPAGE = "https://invent.kde.org/pim/kpkpass"
LICENSE = "BSD-3-Clause & LGPL-2.0-or-later"
LIC_FILES_CHKSUM = " \
    file://LICENSES/BSD-3-Clause.txt;md5=954f4d71a37096249f837652a7f586c0 \
    file://LICENSES/LGPL-2.0-or-later.txt;md5=6d2d9952d88b50a51a5c73dc431d06c7 \
"
PR = "r0"

DEPENDS = " \
    qtbase \
    karchive \
"

FILES:${PN} += "${datadir}/mime"

inherit cmake_kdeapp
inherit mime-xdg
inherit mime
