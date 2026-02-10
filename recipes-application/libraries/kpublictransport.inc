# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KPublicTransport"
DESCRIPTION = "Library to assist with accessing public transport timetables and other data"
HOMEPAGE = "https://invent.kde.org/libraries/kpublictransport"
LICENSE = "MIT & BSD-3-Clause & LGPL-2.0-or-later"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    kirigami-addons \
    qtlocation \
"

inherit cmake_kdeapp
inherit mime-xdg
inherit reuse_license_checksums
