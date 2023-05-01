# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KGlobalAccelD"
HOMEPAGE = ""
LICENSE = "LGPL-2.1-only | LGPL-3.0-only"
LIC_FILES_CHKSUM = "file://LICENSES/LGPL-2.1-only.txt;md5=41890f71f740302b785c27661123bff5"
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
