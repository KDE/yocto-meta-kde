# SPDX-FileCopyrightText: 2019 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

inherit cmake_qt5
inherit ki18n
inherit kdoctools
inherit pkgconfig

EXTRA_OECMAKE:append = " \
    -DBUILD_TESTING=OFF \
    -DOE_KF5_PATH_HOST_ROOT=${STAGING_DIR_HOST} \
"

DEPENDS:append = " \
    extra-cmake-modules \
    qtbase \
    gettext-native \
    kpackage-native \
"

do_configure:prepend() {
    # kpackagetool5 needs to find installed service type files
    export XDG_DATA_DIRS=${STAGING_DATADIR}:$XDG_DATA_DIRS
}

FILES:${PN}:append = " \
    ${libdir}/libkdeinit5_*.so \
    ${libdir}/kconf_update_bin/* \
    ${libdir}/plugins/*.so \
    ${libdir}/plugins/*/*.so \
    ${libdir}/plugins/*/*/*.so \
    ${libdir}/qml \
    ${datadir}/config.kcfg/*.kcfg \
    ${datadir}/dbus-1/services/*.service \
    ${datadir}/dbus-1/system-services/*.service \
    ${datadir}/icons/hicolor \
    ${datadir}/kconf_update/* \
    ${datadir}/khotkeys/*.khotkeys \
    ${datadir}/knotifications5/*.notifyrc \
    ${datadir}/kservices5/*.desktop \
    ${datadir}/kservices5/*.protocol \
    ${datadir}/kservices5/ServiceMenus/*.desktop \
    ${datadir}/kservicetypes5/*.desktop \
    ${datadir}/kxmlgui5/*/*.rc \
    ${datadir}/metainfo/*.xml \
    ${datadir}/polkit-1/actions/*.policy \
    ${datadir}/qlogging-categories5 \
"

FILES:${PN}-dev:append = " \
    ${datadir}/dbus-1/interfaces/*.xml \
    ${datadir}/kdevappwizard/templates/*.tar.bz2 \
    ${libdir}/cmake/*/*.cmake \
    ${prefix}/mkspecs/modules/qt_*.pri \
"
