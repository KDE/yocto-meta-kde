# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma Disks"
SUMMARY = "Monitors S.M.A.R.T. capable devices for imminent failure."
HOMEPAGE = "https://invent.kde.org/plasma/plasma-disks"
LICENSE = "GPL-2.0-only"
PR = "r0"

DEPENDS = " \
    solid \
    kservice \
    kauth \
"

RDEPENDS:${PN} += " \
    smartmontools \
"

inherit cmake_plasma
inherit mime-xdg
inherit reuse_license_checksums
