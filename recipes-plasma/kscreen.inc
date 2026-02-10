# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KScreen"
HOMEPAGE = ""
LICENSE = "GPL-2.0-only"
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

RDEPENDS:${PN} += " \
    kimageformats \
"

inherit cmake_plasma
inherit kf6-kcmutils
inherit reuse_license_checksums

FILES:${PN} += " \
    ${datadir}/kded_kscreen \
    ${datadir}/kcm_kscreen \
    ${datadir}/kpackage \
    ${datadir}/kglobalaccel \
    ${datadir}/plasma/plasmoids/org.kde.kscreen \
    ${libdir}/plugins/plasma/kcms/systemsettings/ \
"
