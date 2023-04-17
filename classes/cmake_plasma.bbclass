# SPDX-FileCopyrightText: 2018-2019 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2018 Alistair Francis <alistair.francis@wdc.com>
#
# SPDX-License-Identifier: MIT

inherit qt6-cmake
inherit kf6-ki18n
inherit kf6-kcoreaddons
inherit kf6-kconfig
inherit kf6-kauth
inherit kf6-kcmutils
inherit kf6-kdoctools
inherit pkgconfig

EXTRA_OECMAKE:append = " \
    -DBUILD_TESTING=OFF \
    -DOE_KF5_PATH_HOST_ROOT=${STAGING_DIR_HOST} \
"

DEPENDS:append = " \
    extra-cmake-modules \
    qtbase \
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
    ${libdir}/plugins/plasma/kcms/*/*.so \
    ${libdir}/systemd/user \
    ${datadir}/config.kcfg/*.kcfg \
    ${datadir}/dbus-1/services/*.service \
    ${datadir}/dbus-1/system-services/*.service \
    ${datadir}/dbus-1/system.d/*.conf \
    ${datadir}/icons/hicolor \
    ${datadir}/kconf_update/* \
    ${datadir}/knotifications5/*.notifyrc \
    ${datadir}/knsrcfiles \
    ${datadir}/kservices5/*.desktop \
    ${datadir}/kservices5/*.protocol \
    ${datadir}/kservicetypes5/*.desktop \
    ${datadir}/kxmlgui5/*/*.rc \
    ${datadir}/metainfo/*.xml \
    ${datadir}/polkit-1/actions/*.policy \
"

FILES:${PN}-dev:append = " \
    ${datadir}/dbus-1/interfaces/*.xml \
    ${datadir}/kdevappwizard/templates/*.tar.bz2 \
    ${datadir}/qlogging-categories5/* \
    ${libdir}/cmake/*/*.cmake \
    ${prefix}/mkspecs/modules/qt_*.pri \
"
