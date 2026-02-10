# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KPkPass"
DESCRIPTION = "Apple Wallet Pass reader"
HOMEPAGE = "https://invent.kde.org/pim/kpkpass"
LICENSE = "BSD-3-Clause & LGPL-2.0-or-later"
PR = "r0"

DEPENDS = " \
    qtbase \
    karchive \
"

FILES:${PN} += "${datadir}/mime"

inherit cmake_kdeapp
inherit mime-xdg
inherit mime
inherit reuse_license_checksums
