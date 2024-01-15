# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KMime"
DESCRIPTION = "Library to assist handling MIME data"
HOMEPAGE = "https://invent.kde.org/pim/kmime"
LICENSE = "MIT & BSD-3-Clause & LGPL-2.0-only"
LIC_FILES_CHKSUM = " \
    file://LICENSES/LGPL-2.0-only.txt;md5=6d2d9952d88b50a51a5c73dc431d06c7 \
"
PR = "r0"

DEPENDS = " \
    qtbase \
    kcodecs \
"

inherit cmake_kdeapp
inherit mime-xdg
