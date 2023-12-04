# SPDX-FileCopyrightText: 2018-2019 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Bluedevil"
HOMEPAGE = ""
LICENSE = "GPL-2"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-only.txt;md5=93e64b4a83c7e441e48bbdeeea05c977"
PR = "r0"

DEPENDS = " \
    bluez-qt \
    kcoreaddons \
    kdbusaddons \
    kded \
    kiconthemes \
    kio \
    knotifications \
    ksvg \
    kwidgetsaddons \
    kwindowsystem \
    libplasma \
    qtdeclarative \
    shared-mime-info \
    shared-mime-info-native \
"

inherit cmake_plasma
inherit mime-xdg
inherit mime

FILES:${PN} += " \
    ${datadir}/bluedevilwizard \
    ${datadir}/kpackage/kcms/ \
    ${datadir}/mime/packages \
    ${datadir}/plasma \
    ${datadir}/remoteview \
    ${libdir}/qml \
    ${libdir}/plugins/plasma/kcms/systemsettings/ \
"
