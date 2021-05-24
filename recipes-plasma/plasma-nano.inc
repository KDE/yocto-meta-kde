# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma Nano"
SUMMARY = "A minimal plasma shell package intended for embedded devices"
HOMEPAGE = "https://invent.kde.org/plasma/plasma-nano"
LICENSE = "MIT & LGPLv2.0+ & GPLv2+"
LIC_FILES_CHKSUM = " \
    file://LICENSES/MIT.txt;md5=4dd71a82d66fd9e3ca0cc65b8be370c0 \
    file://LICENSES/GPL-2.0-or-later.txt;md5=9e2385fe012386d34dcc5c9863070881 \
    file://LICENSES/LGPL-2.0-or-later.txt;md5=da48810c4ddf8e49efa031294a26b98c \
"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    kwayland \
    kwindowsystem \
    plasma-framework \
"

SRC_URI = "git://invent.kde.org/plasma/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_plasma

FILES_${PN} += " \
    ${libdir}/qml/org/kde/plasma/ \
    ${datadir}/plasma/shells/org.kde.plasma.nano/ \
    ${datadir}/plasma/packages/org.kde.plasma.nano.desktoptoolbox/ \
"

RDEPENDS_${PN} += " \
    qtdeclarative \
    plasma-workspace \
"
