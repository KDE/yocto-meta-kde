# SPDX-FileCopyrightText: 2025 Marc Ferland <marc.ferland@sonatest.com>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KNightTime Library"
HOMEPAGE = "https://github.com/KDE/knighttime"
LICENSE = "LGPL-2.1-only | LGPL-3.0-only | GPL-2.0-only | GPL-3.0-only | LicenseRef-KDE-Accepted-GPL | LicenseRef-KDE-Accepted-LGPL | MIT"
LIC_FILES_CHKSUM = " \
    file://LICENSES/GPL-2.0-only.txt;md5=93e64b4a83c7e441e48bbdeeea05c977 \
    file://LICENSES/GPL-3.0-only.txt;md5=1c76c4cc354acaac30ed4d5eefea7245 \
    file://LICENSES/LGPL-2.1-only.txt;md5=fabba2a3bfeb22a6483d44e9ae824d3f \
    file://LICENSES/LGPL-3.0-only.txt;md5=c51d3eef3be114124d11349ca0d7e117 \
    file://LICENSES/LicenseRef-KDE-Accepted-GPL.txt;md5=b4c280013bbbadfbe92219498dc5228c \
    file://LICENSES/LicenseRef-KDE-Accepted-LGPL.txt;md5=e4b79a181b6483b37d39a27f4d75e60a \
"

DEPENDS = " \
    kconfig \
    kcoreaddons \
    kdbusaddons \
    kholidays \
    ki18n \
    qtpositioning \
"

inherit cmake_plasma
