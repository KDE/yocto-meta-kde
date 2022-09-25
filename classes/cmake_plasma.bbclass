# SPDX-FileCopyrightText: 2018-2019 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2018 Alistair Francis <alistair.francis@wdc.com>
#
# SPDX-License-Identifier: MIT

inherit cmake_qt5
inherit ki18n
inherit kcoreaddons
inherit kconfig
inherit kauth
inherit kcmutils
inherit kdoctools

EXTRA_OECMAKE += " \
    -DBUILD_TESTING=OFF \
"

DEPENDS += " \
    extra-cmake-modules \
    qtbase \
    kpackage-native \
"

do_configure:prepend() {
    # kpackagetool5 needs to find installed service type files
    export XDG_DATA_DIRS=${STAGING_DATADIR}:$XDG_DATA_DIRS
}

FILES:${PN} += " \
    ${libdir}/libkdeinit5_*.so \
    ${libdir}/kconf_update_bin/* \
    ${libdir}/plugins/*.so \
    ${libdir}/plugins/*/*.so \
    ${libdir}/plugins/*/*/*.so \
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

FILES:${PN}-dev += " \
    ${datadir}/dbus-1/interfaces/*.xml \
    ${datadir}/kdevappwizard/templates/*.tar.bz2 \
    ${datadir}/qlogging-categories5/* \
    ${libdir}/cmake/*/*.cmake \
    ${prefix}/mkspecs/modules/qt_*.pri \
"
