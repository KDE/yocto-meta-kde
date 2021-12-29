# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2018 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KWin"
HOMEPAGE = ""
LICENSE = "GPL-2.0"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-only.txt;md5=93e64b4a83c7e441e48bbdeeea05c977"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    qtsensors \
    qtscript \
    kconfigwidgets \
    kcrash \
    kglobalaccel \
    kinit \
    knotifications \
    kpackage \
    plasma-framework \
    kwindowsystem \
    kiconthemes \
    kidletime \
    kwayland \
    kwayland-server \
    kcompletion \
    kdeclarative \
    kcmutils \
    kio \
    ktextwidgets \
    knewstuff \
    kservice \
    kxmlgui \
    kdecoration \
    krunner \
    kscreenlocker \
    libxcb \
    xcb-util-cursor \
    fontconfig \
    libepoxy \
    libinput \
"

SRC_URI_append = " \
    file://kwinrc \
"

inherit cmake_plasma kdoctools

do_install_append() {
    # dirty workaround for aurora crash on Wayland
    rm -rf ${D}/${libdir}/plugins/org.kde.kdecoration2/

    install -d ${D}/${sysconfdir}/xdg
    install -m 644 ${WORKDIR}/kwinrc ${D}/${sysconfdir}/xdg/kwinrc
}

FILES_SOLIBSDEV = ""
FILES:${PN} += " \
    ${libdir}/kconf_update_bin/kwin5_update_default_rules \
    ${libdir}/plugins/*.so \
    ${libdir}/plugins/kpackage/packagestructure/*.so \
    ${libdir}/plugins/org.kde.kwin.scenes/*.so \
    ${libdir}/plugins/org.kde.kglobalaccel5.platforms/*.so \
    ${libdir}/plugins/kwin/effects/configs/*.so \
    ${libdir}/plugins/org.kde.kwin.waylandbackends/*.so \
    ${libdir}/plugins/org.kde.kdecoration2/*.so \
    ${libdir}/plugins/kf5/org.kde.kidletime.platforms/*.so \
    ${libdir}/plugins/org.kde.kwin.platforms/*.so \
    ${libdir}/plugins/platforms/*.so \
    ${libdir}/qml/org/kde/kwin/decoration/* \
    ${libdir}/qml/org/kde/kwin/decorations/plastik/* \
    ${libdir}/qml/org/kde/kwin/private/kdecoration/* \
    ${libdir}/systemd/user/*.service \
    ${datadir}/kservices5/*.desktop \
    ${datadir}/kservices5/kwin/*.desktop \
    ${datadir}/knotifications5/*.notifyrc \
    ${datadir}/kservicetypes5/*.desktop \
    ${datadir}/kwincompositing/qml/*.qml \
    ${datadir}/config.kcfg/*.kcfg \
    ${datadir}/kpackage \
    ${datadir}/krunner/dbusplugins/*.desktop \
"

FILES:${PN}-dev += " \
    ${libdir}/libkwin*.so \
"

RDEPENDS:${PN} += " \
    maliit-keyboard-qt5 \
    qtwayland-plugins \
    xserver-xorg-xwayland \
    perl \
"
