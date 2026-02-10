# SPDX-FileCopyrightText: 2025 Marc Ferland <marc.ferland@sonatest.com>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KNightTime Library"
HOMEPAGE = "https://github.com/KDE/knighttime"
LICENSE = "LGPL-2.1-only | LGPL-3.0-only | GPL-2.0-only | GPL-3.0-only | LicenseRef-KDE-Accepted-GPL | LicenseRef-KDE-Accepted-LGPL | MIT"

DEPENDS = " \
    kconfig \
    kcoreaddons \
    kdbusaddons \
    kholidays \
    ki18n \
    qtpositioning \
"

inherit cmake_plasma
inherit reuse_license_checksums
