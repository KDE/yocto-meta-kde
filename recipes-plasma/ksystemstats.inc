# SPDX-FileCopyrightText: 2025 Marc Ferland <marc.ferland@sonatest.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KSystemStats"
DESCRIPTION = "KSystemStats is a daemon that collects statistics about the running system."
HOMEPAGE = "https://invent.kde.org/plasma/ksystemstats"
LICENSE = "BSD-2-Clause | BSD-3-Clause | GPL-2.0-only | GPL-3.0-only | LicenseRef-KDE-Accepted-GPL"
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
inherit reuse_license_checksums
