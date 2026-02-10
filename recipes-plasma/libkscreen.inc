# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KScreen library"
HOMEPAGE = ""
LICENSE = "LGPL-2.1-or-later | (GPL-2.0-only | GPL-3.0-only | LicenseRef-KDE-Accepted-GPL)"
PR = "r0"

DEPENDS = " \
    qtwayland-native \
    kwayland \
"

inherit cmake_plasma
inherit reuse_license_checksums

FILES:${PN} += " \
    ${datadir}/zsh/site-functions/_kscreen-doctor \
"
