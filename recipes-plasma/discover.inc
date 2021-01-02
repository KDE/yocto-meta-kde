# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Discover"
HOMEPAGE = ""
LICENSE = "GPL-3"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-only.txt;md5=93e64b4a83c7e441e48bbdeeea05c977"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    kcoreaddons \
    kconfig \
    kcrash \
    kdbusaddons \
    karchive \
    kdeclarative \
    kxmlgui \
    kitemmodels \
    kio \
    kirigami \
    attica \
    knewstuff \
    knotifications \
"

SRC_URI = "git://invent.kde.org/plasma/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_plasma
inherit mime-xdg

FILES_${PN} += " \
    ${libdir}/qml/org/kde/discovernotifier \
    ${libdir}/plasma-discover \
"
