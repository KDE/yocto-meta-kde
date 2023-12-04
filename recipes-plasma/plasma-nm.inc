# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma NM"
HOMEPAGE = ""
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-only.txt;md5=9e2385fe012386d34dcc5c9863070881"
PR = "r0"

DEPENDS = " \
    kcompletion \
    kconfigwidgets \
    kcoreaddons \
    kdbusaddons \
    kdeclarative \
    kiconthemes \
    kio \
    knotifications \
    kservice \
    ksvg \
    kwallet \
    kwidgetsaddons \
    kwindowsystem \
    libplasma \
    modemmanager-qt \
    networkmanager-qt \
    prison \
    qca \
    qcoro \
    qtdeclarative \
    qttools \
    solid \
"

inherit cmake_plasma

EXTRA_OECMAKE += " \
    -DOE_QCA_PATH_HOST_ROOT=${STAGING_DIR_HOST} \
    -DBUILD_MOBILE=ON \
"

FILES_SOLIBSDEV = ""
FILES:${PN} += " \
    ${libdir}/*.so \
    ${libdir}/plugins/plasma/network/vpn/*.so \
    ${libdir}/plugins/plasma/kcms/systemsettings_qwidgets/kcm_networkmanagement.so \
    ${libdir}/qml/org/kde/plasma/networkmanagement \
    ${datadir}/plasma/plasmoids/org.kde.plasma.networkmanagement \
    ${datadir}/kcm_networkmanagement/qml/*.qml \
    ${datadir}/kpackage \
"
