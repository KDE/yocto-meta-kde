# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Plasma Mobile Settings"
DESCRIPTION = "Settings application for Plasma Mobile"
HOMEPAGE = "https://invent.kde.org/plasma-mobile/plasma-settings"
LICENSE = "GPL-2.0-or-later"
PR = "r0"

DEPENDS += "kirigami-addons \
            kitemmodels \
            libplasma \
            modemmanager-qt \
            networkmanager-qt \
"

inherit cmake_plasma
inherit reuse_license_checksums

FILES:${PN} += "${libdir}/qml \
                ${datadir}/kpackage \
"
