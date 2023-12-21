# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KScreen"
HOMEPAGE = ""
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-only.txt;md5=9e2385fe012386d34dcc5c9863070881"
PR = "r0"

DEPENDS = " \
    kconfigwidgets \
    kdbusaddons \
    kglobalaccel \
    kwidgetsaddons \
    kxmlgui \
    layer-shell-qt \
    libkscreen \
    libplasma \
    qtdeclarative \
    qtsensors \
    qtwayland-native \
"

inherit cmake_plasma
inherit kf6-kcmutils

FILES:${PN} += " \
    ${datadir}/kded_kscreen \
    ${datadir}/kcm_kscreen \
    ${datadir}/kpackage \
    ${datadir}/plasma/plasmoids/org.kde.kscreen \
    ${libdir}/plugins/plasma/kcms/systemsettings/ \
"
