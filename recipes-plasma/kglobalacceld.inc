# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KGlobalAccelD"
DESCRIPTION = "Daemon providing Global Keyboard Shortcut (Accelerator) functionality"
HOMEPAGE = "https://invent.kde.org/plasma/kglobalacceld"
LICENSE = "LGPL-2.1-only | LGPL-3.0-only"

DEPENDS += "kcrash \
            kdbusaddons \
            kglobalaccel \
            kio \
            knotifications \
            kservice \
            kwindowsystem \
"

inherit cmake_plasma
inherit reuse_license_checksums
