# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Kongress"
DESCRIPTION = "Companion application for conferences"
HOMEPAGE = "https://invent.kde.org/utilities/kongress"
LICENSE = "BSD-2-Clause | BSD-3-Clause | GPL-3.0-or-later | LGPL-3.0-or-later"
PR = "r0"

DEPENDS += "kcalendarcore \
            kdbusaddons \
            kirigami \
            kirigami-addons \
            knotifications \
            kosmindoormap \
            qtdeclarative \
            qtsvg \
"

inherit cmake_kdeapp
inherit kf6-kconfig
inherit reuse_license_checksums
