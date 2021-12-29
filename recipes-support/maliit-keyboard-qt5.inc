# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-3.0"
LIC_FILES_CHKSUM = "file://COPYING;md5=6a6a8e020838b23406c81b19c1d46df6"

SRC_URI = " \
    git://github.com/maliit/keyboard.git;nobranch=1 \
"
S = "${WORKDIR}/git"

DEPENDS += " \
    maliit-framework-qt5 \
    qtbase \
    qtmultimedia \
    glibc \
    hunspell \
    anthy \
    libpinyin \
    libchewing \
"

inherit cmake_qt5
inherit gsettings

EXTRA_OECMAKE += "-Denable-presage=OFF"

FILES:${PN} += " \
    ${datadir}/glib-2.0/schemas/org.maliit.keyboard.maliit.gschema.xml \
    ${datadir}/maliit/keyboard2/themes \
    ${datadir}/maliit/keyboard2/styles \
    ${datadir}/maliit/keyboard2/icons \
    ${datadir}/maliit/keyboard2/images \
    ${datadir}/maliit/keyboard2/devices \
    ${libdir}/maliit/keyboard2/languages \
    ${libdir}/maliit/keyboard2/qml \
    ${libdir}/maliit/plugins/libmaliit-keyboard-plugin.so \
"
