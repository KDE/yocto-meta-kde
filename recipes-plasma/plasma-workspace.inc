# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma Workspace"
HOMEPAGE = ""
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=5c213a7de3f013310bd272cdb6eb7a24"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    qtwayland-native \
    baloo \
    kcoreaddons \
    kcrash \
    solid \
    kactivities \
    kcmutils \
    kdbusaddons \
    kdeclarative \
    kdelibs4support \
    kdesu \
    kidletime \
    kitemmodels \
    kjsembed \
    knewstuff \
    knotifications \
    knotifyconfig \
    kpackage \
    kholidays \
    krunner \
    kscreenlocker \
    ktexteditor \
    kwallet \
    kwayland \
    kwin \
    libksysguard \
    networkmanager-qt \
    phonon \
    plasma-framework \
    prison \
    kpeople \
    kactivitiesstats \
    libkscreen \
    libxft \
"

SRC_URI = "git://invent.kde.org/plasma/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_plasma
inherit kdoctools

EXTRA_OECMAKE += " -DBUILD_xembed-sni-proxy=OFF"

FILES_SOLIBSDEV = ""
FILES_${PN} += " \
    ${datadir}/desktop-directories/*.directory \
    ${datadir}/kcontrol \
    ${datadir}/kdisplay \
    ${datadir}/kfontinst \
    ${datadir}/kglobalaccel \
    ${datadir}/kio_desktop \
    ${datadir}/konqsidebartng \
    ${datadir}/kpackage \
    ${datadir}/krunner \
    ${datadir}/kservices5 \
    ${datadir}/ksmserver/themes \
    ${datadir}/ksplash/Themes \
    ${datadir}/kstyle/themes/*.themerc \
    ${datadir}/plasma/look-and-feel \
    ${datadir}/plasma/plasmoids \
    ${datadir}/plasma/services/*.operations \
    ${datadir}/plasma/shareprovider \
    ${datadir}/plasma/wallpapers \
    ${datadir}/sddm/themes \
    ${datadir}/solid/actions/*.desktop \
    ${datadir}/wayland-sessions/*.desktop \
    ${datadir}/xsessions/*.desktop \
    ${libdir}/plugins/plasmacalendarplugins \
    ${libdir}/qml/org/kde \
"

FILES_${PN}-dev += " \
    ${libdir}/libcolorcorrect.so \
    ${libdir}/libnotificationmanager.so \
    ${libdir}/libkfontinst.so \
    ${libdir}/libkfontinstui.so \
    ${libdir}/libtaskmanager.so \
    ${libdir}/libkworkspace5.so \
    ${libdir}/libplasma-geolocation-interface.so \
    ${libdir}/libweather_ion.so \
"

RDEPENDS_${PN} += " \
    kinit \
    kquickcharts \
    milou \
    xprop \
    xset \
    qttools-tools \
"
