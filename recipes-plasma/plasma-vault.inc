# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma Vault"
SUMMARY = "Plasma applet and services for creating encrypted vaults"
HOMEPAGE = "https://invent.kde.org/plasma/plasma-vault"
LICENSE = "LGPL-2.1-only & (GPL-2.0-only | GPL-3.0-only | LicenseRef-KDE-Accepted-GPL)"
PR = "r0"

DEPENDS = " \
    qtbase \
    kconfig \
    kitemmodels \
    kservice \
    kio \
    networkmanager-qt \
    libplasma \
    libksysguard \
"

inherit cmake_plasma
inherit reuse_license_checksums

FILES:${PN} += " \
    ${datadir}/plasma/plasmoids/org.kde.plasma.vault/* \
"
