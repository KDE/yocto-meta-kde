# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
# SPDX-FileCopyrightText: 2024 Maxime Roussin-Bélanger <maxime.roussinbelanger@gmail.com>
#
# SPDX-License-Identifier: MIT

LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=d32239bcb673463ab874e80d47fae504"

SRC_URI = "git://github.com/maliit/keyboard.git;nobranch=1;protocol=https \
           file://0001-qml-Fix-for-qt6.patch \
           file://0001-cmake-add-Qt6-support.patch \
           "
S = "${WORKDIR}/git"

DEPENDS += " \
    maliit-framework-qt6 \
    qtbase \
    qtdeclarative \
    qtdeclarative-native \
    qt5compat \
    qtmultimedia \
    glibc \
    hunspell \
    anthy \
    libpinyin \
    libchewing \
"

inherit qt6-cmake
inherit gsettings
inherit pkgconfig

EXTRA_OECMAKE += " \
    -Denable-tests=OFF \
    -Denable-presage=OFF \
    -Dwith-qt6=ON \
    -DCMAKE_POSITION_INDEPENDENT_CODE=ON \
"

FILES:${PN} += " \
    ${datadir}/glib-2.0/schemas/org.maliit.keyboard.maliit.gschema.xml \
    ${datadir}/metainfo/com.github.maliit.keyboard.metainfo.xml \
    ${datadir}/maliit/keyboard2/themes \
    ${datadir}/maliit/keyboard2/styles \
    ${datadir}/maliit/keyboard2/icons \
    ${datadir}/maliit/keyboard2/images \
    ${datadir}/maliit/keyboard2/devices \
    ${libdir}/maliit/keyboard2/languages \
    ${libdir}/maliit/keyboard2/qml \
    ${libdir}/maliit/plugins/libmaliit-keyboard-plugin.so \
"
