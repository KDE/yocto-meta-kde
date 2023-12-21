# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Discover"
HOMEPAGE = ""
LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-only.txt;md5=93e64b4a83c7e441e48bbdeeea05c977"
PR = "r0"

DEPENDS = " \
    attica \
    karchive \
    kconfig \
    kcoreaddons \
    kcrash \
    kdbusaddons \
    kdeclarative \
    kidletime \
    kio \
    kirigami \
    kitemmodels \
    knewstuff \
    knotifications \
    kxmlgui \
    purpose \
    qtdeclarative \
    qtwebview \
"

inherit cmake_plasma
inherit mime-xdg

FILES:${PN} += " \
    ${libdir}/qml/org/kde/discovernotifier \
    ${libdir}/plasma-discover \
    ${libdir}/plugins/plasma/kcms/systemsettings/* \
    ${datadir}/kpackage/kcms/kcm_updates \
"
