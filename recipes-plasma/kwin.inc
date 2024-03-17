# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2018 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020-2022 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KWin"
HOMEPAGE = ""
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-only.txt;md5=93e64b4a83c7e441e48bbdeeea05c977"
PR = "r0"

DEPENDS:class-target = " \
    qtdeclarative \
    qtsensors \
    qtwayland-native \
    kpackage-native \
    kconfigwidgets \
    kcrash \
    kglobalaccel \
    kglobalacceld \
    knotifications \
    kpackage \
    kwin-native \
    wayland \
    wayland-protocols \
    libplasma \
    kwindowsystem \
    kidletime \
    kwayland \
    kcompletion \
    kdeclarative \
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
    lcms \
    libinput \
    libdisplay-info \
    pipewire \
    libxcvt \
    hwdata \
"

DEPENDS:class-native = " \
    qtbase-native \
    extra-cmake-modules-native \
"

SRC_URI:append = " \
    file://kwinrc \
"

SRC_URI:append:class-native = " \
    file://0001-Add-install-operation-for-native-build.patch \
"

OECMAKE_SOURCEPATH:class-native = "${S}/src/wayland/tools"
EXTRA_OECMAKE:append:class-target = " \
    -DQTWAYLANDSCANNER_KDE_EXECUTABLE=${STAGING_DIR_NATIVE}/${bindir}/qtwaylandscanner_kde \
    -DBUILD_TESTING=OFF \
"

inherit kf6-kauth
inherit kf6-kcmutils
inherit kf6-kconfig
inherit kf6-kdoctools
inherit qt6-cmake
inherit pkgconfig
# TODO skip inherit of cmake_plasma for now because it leads to build errors for native package

do_install:append() {
    # dirty workaround for aurora crash on Wayland
    rm -rf ${D}/${libdir}/plugins/org.kde.kdecoration2/

    install -d ${D}/${sysconfdir}/xdg
    install -m 644 ${WORKDIR}/kwinrc ${D}/${sysconfdir}/xdg/kwinrc
}

FILES_SOLIBSDEV = ""
FILES:${PN} += " \
    ${datadir}/config.kcfg/*.kcfg \
    ${datadir}/icons/hicolor \
    ${datadir}/kconf_update/* \
    ${datadir}/knotifications6/*.notifyrc \
    ${datadir}/knsrcfiles/* \
    ${datadir}/kpackage \
    ${datadir}/krunner/dbusplugins/*.desktop \
    ${datadir}/kservices6/*.desktop \
    ${datadir}/kservices6/kwin/*.desktop \
    ${datadir}/kservicetypes6/*.desktop \
    ${datadir}/kwincompositing/qml/*.qml \
    ${datadir}/qlogging-categories6 \
    ${libdir}/kconf_update_bin/kwin-6.0-delete-desktop-switching-shortcuts \
    ${libdir}/kconf_update_bin/kwin-6.0-remove-breeze-tabbox-default \
    ${libdir}/kconf_update_bin/kwin-6.0-reset-active-mouse-screen \
    ${libdir}/kconf_update_bin/kwin5_update_default_rules \
    ${libdir}/plugins/*.so \
    ${libdir}/plugins/kf6/org.kde.kidletime.platforms/*.so \
    ${libdir}/plugins/kf6/packagestructure/*.so \
    ${libdir}/plugins/kpackage/packagestructure/*.so \
    ${libdir}/plugins/kwin/effects/configs/*.so \
    ${libdir}/plugins/kwin/plugins/*.so \
    ${libdir}/plugins/org.kde.kdecoration2.kcm/kcm_auroraedecoration.so \
    ${libdir}/plugins/org.kde.kdecoration2/*.so \
    ${libdir}/plugins/org.kde.kglobalaccel6.platforms/*.so \
    ${libdir}/plugins/org.kde.kwin.platforms/*.so \
    ${libdir}/plugins/org.kde.kwin.scenes/*.so \
    ${libdir}/plugins/org.kde.kwin.waylandbackends/*.so \
    ${libdir}/plugins/plasma/kcms/systemsettings/*.so \
    ${libdir}/plugins/plasma/kcms/systemsettings_qwidgets/*.so \
    ${libdir}/plugins/platforms/*.so \
    ${libdir}/qml/org/kde/kwin.2/* \
    ${libdir}/qml/org/kde/kwin/decoration/* \
    ${libdir}/qml/org/kde/kwin/decorations/plastik/* \
    ${libdir}/qml/org/kde/kwin/effects/* \
    ${libdir}/qml/org/kde/kwin/private/effects/* \
    ${libdir}/qml/org/kde/kwin/private/kdecoration/* \
    ${libdir}/qml/org/kde/plasma/quicksetting/nightcolor/* \
    ${libdir}/systemd/user/*.service \
"

FILES:${PN}-dev += " \
    ${libdir}/libkwin*.so \
    ${datadir}/dbus-1/interfaces/*.xml \
"

RDEPENDS:${PN}:append:class-target = " \
    qtwayland-plugins \
    xwayland \
    perl \
"

# TODO QT6 porting missing
RRECOMMENDS:${PN}:append:class-target = " \
    ${@bb.utils.contains('BBFILE_COLLECTIONS', 'meta-qt5r', 'maliit-keyboard-qt5', '', d)} \
"

BBCLASSEXTEND = "native"
