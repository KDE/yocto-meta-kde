# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KPublicTransport"
DESCRIPTION = "Library to assist with accessing public transport timetables and other data"
HOMEPAGE = "https://invent.kde.org/libraries/kpublictransport"
LICENSE = "MIT & BSD-3-Clause & LGPL-2.0-or-later"
LIC_FILES_CHKSUM = " \
    file://LICENSES/LGPL-2.0-or-later.txt;md5=6d2d9952d88b50a51a5c73dc431d06c7 \
"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
"

inherit cmake_kdeapp
inherit mime-xdg
