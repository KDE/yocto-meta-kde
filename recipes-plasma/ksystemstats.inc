# SPDX-FileCopyrightText: 2025 Marc Ferland <marc.ferland@sonatest.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KSystemStats"
DESCRIPTION = "KSystemStats is a daemon that collects statistics about the running system."
HOMEPAGE = "https://invent.kde.org/plasma/ksystemstats"
LICENSE = "BSD-2-Clause | BSD-3-Clause | GPL-2.0-only | GPL-3.0-only | LicenseRef-KDE-Accepted-GPL"
LIC_FILES_CHKSUM = " \
    file://LICENSES/BSD-2-Clause.txt;md5=f225922a2c12dfa5218fb70c49db3ea6 \
    file://LICENSES/BSD-3-Clause.txt;md5=f225922a2c12dfa5218fb70c49db3ea6 \
    file://LICENSES/GPL-2.0-only.txt;md5=93e64b4a83c7e441e48bbdeeea05c977 \
    file://LICENSES/GPL-3.0-only.txt;md5=1c76c4cc354acaac30ed4d5eefea7245 \
    file://LICENSES/LicenseRef-KDE-Accepted-GPL.txt;md5=b4c280013bbbadfbe92219498dc5228c \
"
PR = "r0"

DEPENDS = " \
    kcoreaddons \
    solid \
    kio \
    kcrash \
    libksysguard \
    networkmanager-qt \
"

inherit cmake_plasma
