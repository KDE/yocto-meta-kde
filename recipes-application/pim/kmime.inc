# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KMime"
DESCRIPTION = "Library to assist handling MIME data"
HOMEPAGE = "https://invent.kde.org/pim/kmime"
LICENSE = "BSD-3-Clause & LGPL-2.0-only & LGPL-2.0-or-later"
PR = "r0"

DEPENDS = " \
    qtbase \
    kcodecs \
"

inherit cmake_kdeapp
inherit mime-xdg
inherit reuse_license_checksums
