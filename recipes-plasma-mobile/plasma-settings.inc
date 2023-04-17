# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma Mobile Settings"
HOMEPAGE = ""
LICENSE = "GPL-2.0+"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-or-later.txt;md5=9e2385fe012386d34dcc5c9863070881"
PR = "r0"

DEPENDS = " \
    plasma-framework \
    kitemmodels \
    kinit \
    modemmanager-qt \
    networkmanager-qt \
    kirigami-addons \
"

inherit cmake_plasma
inherit kf6-kdoctools

FILES:${PN} += " \
    ${libdir}/qml \
    ${datadir}/kpackage \
"
