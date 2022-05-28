# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://LICENSE.LGPL;md5=5c917f6ce94ceb8d8d5e16e2fca5b9ad"

SRC_URI = " \
    git://github.com/maliit/framework.git;nobranch=1;protocol=https \
"
S = "${WORKDIR}/git"

DEPENDS += " \
    qtbase \
    qtdeclarative \
    qtmultimedia \
    qtwayland \
    qtwayland-native \
    glibc \
    glib-2.0-native \
    wayland \
"

inherit cmake_qt5

EXTRA_OECMAKE += " \
    -Denable-docs=OFF \
    -Denable-tests=OFF \
    -Denable-dbus-activation=ON \
    -DQT5_PLUGINS_INSTALL_DIR=${OE_QMAKE_PATH_PLUGINS} \
"

FILES:${PN} += " \
    ${libdir}/plugins \
    ${datadir}/dbus-1/ \
"

FILES:${PN}-dev += " \
    ${libdir}/qt5/mkspecs \
"
