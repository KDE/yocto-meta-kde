# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma NM"
HOMEPAGE = "https://invent.kde.org/plasma/plasma-nm"
LICENSE = "GPL-2.0-only"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    qttools \
    \
    kcompletion \
    kconfigwidgets \
    kcoreaddons \
    kdbusaddons \
    kiconthemes \
    kio \
    knotifications \
    kservice \
    ksvg \
    kwallet \
    kwidgetsaddons \
    kwindowsystem \
    modemmanager-qt \
    networkmanager-qt \
    prison \
    solid \
    \
    libplasma \
    \
    qca \
    qcoro \
"

inherit cmake_plasma
inherit mime-xdg
inherit reuse_license_checksums

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
