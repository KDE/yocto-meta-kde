# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KDecoration"
DESCRIPTION = "Plugin based library to create window decorations"
HOMEPAGE = "https://invent.kde.org/plasma/kdecoration"
LICENSE = "LGPL-2.1-only"
PR = "r0"

inherit cmake_plasma
inherit reuse_license_checksums

FILES:${PN} += "${datadir}/locale"
