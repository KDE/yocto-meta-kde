# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2018 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020-2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Milou"
HOMEPAGE = ""
LICENSE = "(LGPL-2.1-only | LGPL-3.0-only | LicenseRef-KDE-Accepted-LGPL) & (GPL-2.0-only | GPL-3.0-only | LicenseRef-KDE-Accepted-GPL) & GPL-2.0-or-later"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    kcoreaddons \
    kitemmodels \
    kdeclarative \
    kservice \
    libplasma \
    krunner \
"

inherit cmake_plasma
inherit reuse_license_checksums

FILES:${PN} += " \
    ${libdir}/qml/org/kde/milou/* \
    ${datadir}/plasma/plasmoids/org.kde.milou \
"
