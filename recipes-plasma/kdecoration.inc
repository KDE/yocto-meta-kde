# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plugin based library to create window decorations"
HOMEPAGE = ""
LICENSE = "LGPL-2.1-only"
PR = "r0"

inherit cmake_plasma
inherit reuse_license_checksums

FILES:${PN} += " \
    ${datadir}/locale \
"
