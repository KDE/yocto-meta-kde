# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma Mobile Settings"
HOMEPAGE = "https://invent.kde.org/plasma-mobile/plasma-settings"
LICENSE = "GPL-2.0-or-later"
PR = "r0"

DEPENDS = " \
    kitemmodels \
    modemmanager-qt \
    networkmanager-qt \
    kirigami-addons \
    libplasma \
"

inherit cmake_plasma
inherit kf6-kdoctools
inherit reuse_license_checksums

FILES:${PN} += " \
    ${libdir}/qml \
    ${datadir}/kpackage \
"
