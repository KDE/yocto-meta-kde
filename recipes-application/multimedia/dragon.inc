# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Dragon"
DESCRIPTION = "Multimedia player with the focus on simplicity, not features"
HOMEPAGE = "https://invent.kde.org/multimedia/dragon/"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-only.txt;md5=93e64b4a83c7e441e48bbdeeea05c977"
PR = "r0"

DEPENDS += " \
    kconfigwidgets \
    ki18n \
    kparts \
    kxmlgui \
    phonon \
    qtbase \
    solid \
"

inherit cmake_kdeapp
inherit kf6-kcoreaddons
inherit kf6-kdoctools
inherit kf6-kconfig
inherit mime-xdg

FILES:${PN} += " \
    ${datadir}/icons/oxygen/* \
    ${datadir}/kio/servicemenus/* \
    ${datadir}/solid/actions/* \
"
