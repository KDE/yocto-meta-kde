# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KGlobalAccelD"
HOMEPAGE = ""
LICENSE = "LGPL-2.1-only | LGPL-3.0-only"
PR = "r0"

DEPENDS = " \
    kcrash \
    kdbusaddons \
    kglobalaccel \
    kio \
    knotifications \
    kservice \
    kwindowsystem \
    qtbase \
"

inherit cmake_plasma
inherit reuse_license_checksums
