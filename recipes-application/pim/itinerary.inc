# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Itinerary"
SUMMARY = "Itinerary and boarding pass management application"
HOMEPAGE = "https://invent.kde.org/pim/itinerary"
LICENSE = "LGPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://LICENSES/LGPL-2.0-or-later.txt;md5=6d2d9952d88b50a51a5c73dc431d06c7"
PR = "r0"

DEPENDS += " \
    qtbase \
    qtdeclarative \
    qtpositioning \
    kirigami \
    kirigami-addons \
    kcontacts \
    kcalendarcore \
    kholidays \
    kunitconversion \
    kpkpass \
    kitinerary \
    kosmindoormap \
    kpublictransport \
    qqc2-desktop-style \
"

inherit cmake_kdeapp
inherit mime-xdg
inherit mime
inherit kf6-kconfig

INSANE_SKIP:${PN} = "dev-so"
FILES:${PN} += " \
    ${libdir}/libSolidExtras.so \
"
FILES_SOLIBSDEV = ""

RDEPENDS:${PN} += " \
    prison \
    solid \
    qtlocation-qmlplugins \
    qtmultimedia-qmlplugins \
"
