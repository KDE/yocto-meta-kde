# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KScreen library"
DESCRIPTION = "KDE's screen management software"
HOMEPAGE = "https://invent.kde.org/plasma/libkscreen"
LICENSE = "LGPL-2.1-or-later | (GPL-2.0-only | GPL-3.0-only | LicenseRef-KDE-Accepted-GPL)"

DEPENDS += "kwayland \
            qtwayland-native \
"

inherit cmake_plasma
inherit reuse_license_checksums

FILES:${PN} += "${datadir}/zsh/site-functions/_kscreen-doctor"
