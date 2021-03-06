# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma NM"
HOMEPAGE = ""
LICENSE = "GPL-2"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    qttools \
    networkmanager-qt \
    modemmanager-qt \
    kwindowsystem \
    kservice \
    kcompletion \
    kwidgetsaddons \
    kio \
    kcoreaddons \
    kwallet \
    kitemviews \
    kxmlgui \
    kconfigwidgets \
    kiconthemes \
    solid \
    kdbusaddons \
    knotifications \
    plasma-framework \
    kdeclarative \
    kinit \
    kitemmodels \
    qca \
"

SRC_URI = "git://invent.kde.org/plasma/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_plasma

EXTRA_OECMAKE += " \
    -DOE_QCA_PATH_HOST_ROOT=${STAGING_DIR_HOST} \
    -DBUILD_MOBILE=ON \
"

FILES_SOLIBSDEV = ""
FILES_${PN} += " \
    ${libdir}/*.so \
    ${libdir}/qml/org/kde/plasma/networkmanagement \
    ${datadir}/plasma/plasmoids/org.kde.plasma.networkmanagement \
    ${datadir}/kcm_networkmanagement/qml/*.qml \
    ${datadir}/kpackage \
"
