# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020-2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma Workspace"
HOMEPAGE = ""
LICENSE = "GPL-2.0"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-only.txt;md5=9e2385fe012386d34dcc5c9863070881"
PR = "r0"

DEPENDS = " \
    baloo \
    breeze \
    kactivities \
    kactivitiesstats \
    kcmutils \
    kcoreaddons \
    kcrash \
    kdbusaddons \
    kdeclarative \
    kded \
    kdesu \
    kholidays \
    kidletime \
    kitemmodels \
    kjsembed \
    knewstuff \
    knotifications \
    knotifyconfig \
    kpackage \
    kpeople \
    kquickcharts \
    krunner \
    kscreen \
    kscreenlocker \
    ktexteditor \
    kunitconversion \
    kuserfeedback \
    kwallet \
    kwayland \
    kwin \
    libkscreen \
    libksysguard \
    libxft \
    networkmanager-qt \
    phonon \
    plasma-framework \
    prison \
    qtdeclarative \
    qtwayland-native \
    solid \
"

inherit cmake_plasma
inherit kdoctools
inherit mime-xdg

EXTRA_OECMAKE += " -DBUILD_xembed-sni-proxy=OFF"

FILES_SOLIBSDEV = ""
FILES:${PN} += " \
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
    ${libdir}/libkrdb.so \
    ${libdir}/plugins/plasmacalendarplugins \
    ${libdir}/qml/org/kde \
"

FILES:${PN}-dev += " \
    ${libdir}/libcolorcorrect.so \
    ${libdir}/libnotificationmanager.so \
    ${libdir}/libkfontinst.so \
    ${libdir}/libkfontinstui.so \
    ${libdir}/libtaskmanager.so \
    ${libdir}/libkworkspace5.so \
    ${libdir}/libplasma-geolocation-interface.so \
    ${libdir}/libweather_ion.so \
"

RDEPENDS:${PN} += " \
    kinit \
    kquickcharts \
    milou \
    xprop \
    xset \
    qttools-tools \
"
