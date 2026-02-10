# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Companion application for conferences"
HOMEPAGE = "https://invent.kde.org/utilities/kongress"
LICENSE = "BSD-2-Clause | BSD-3-Clause | GPL-3.0-or-later | LGPL-3.0-or-later"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    qtsvg \
    kcalendarcore \
    kdbusaddons \
    kirigami \
    kirigami-addons \
    knotifications \
    kosmindoormap \
"

inherit cmake_kdeapp
inherit kf6-kconfig
inherit reuse_license_checksums
