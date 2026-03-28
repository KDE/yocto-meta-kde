# SPDX-FileCopyrightText: 2022 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Plank Player"
DESCRIPTION = "Multimedia Player for playing local files on Plasma Bigscreen allowing navigation with just a remote control"
HOMEPAGE = "https://invent.kde.org/plasma/plank-player"
LICENSE = "GPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-or-later.txt;md5=9e2385fe012386d34dcc5c9863070881"

DEPENDS += "kirigami \
            qtdeclarative \
            qtmultimedia \
"

RDEPENDS:${PN} += "qqc2-desktop-style \
                   qtmultimedia \
                   qtmultimedia-plugins \
                   qtmultimedia-qmlplugins \
"

inherit cmake_plasma
inherit mime-xdg
