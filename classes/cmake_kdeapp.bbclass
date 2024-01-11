# SPDX-FileCopyrightText: 2019 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2023 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

inherit kf6-cmake
inherit kf6-ki18n
inherit kf6-kdoctools
inherit pkgconfig

EXTRA_OECMAKE:append = " \
    -DBUILD_TESTING=OFF \
    -DOE_KF6_PATH_HOST_ROOT=${STAGING_DIR_HOST} \
    -DQT_MAJOR_VERSION=6 \
    -DBUILD_WITH_QT6=ON \
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
    ${libdir}/libkdeinit6_*.so \
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
    ${datadir}/knotifications6/*.notifyrc \
    ${datadir}/kservices6/*.desktop \
    ${datadir}/kservices6/*.protocol \
    ${datadir}/kservices6/ServiceMenus/*.desktop \
    ${datadir}/kservicetypes6/*.desktop \
    ${datadir}/kxmlgui6/*/*.rc \
    ${datadir}/metainfo/*.xml \
    ${datadir}/polkit-1/actions/*.policy \
    ${datadir}/qlogging-categories6 \
"

FILES:${PN}-dev:append = " \
    ${datadir}/dbus-1/interfaces/*.xml \
    ${datadir}/kdevappwizard/templates/*.tar.bz2 \
    ${libdir}/cmake/*/*.cmake \
    ${prefix}/mkspecs/modules/qt_*.pri \
"
