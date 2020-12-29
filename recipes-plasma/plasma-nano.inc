# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma Nano"
SUMMARY = "A minimal plasma shell package intended for embedded devices"
HOMEPAGE = "https://invent.kde.org/plasma/plasma-nano"
LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
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
