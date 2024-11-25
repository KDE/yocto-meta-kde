# SPDX-FileCopyrightText: 2020-2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
# SPDX-FileCopyrightText: 2024 Maxime Roussin-Bélanger <maxime.roussinbelanger@gmail.com>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.1-only"
LIC_FILES_CHKSUM = "file://LICENSE.LGPL;md5=5c917f6ce94ceb8d8d5e16e2fca5b9ad"

SRC_URI = "git://github.com/maliit/framework.git;branch=qt6-support;protocol=https \
           file://0001-common-namespace-add-missing-include-QList.patch \
           file://0002-maliitpluginsconfig-fix-for-qt6.patch \
           file://0003-shellintegration-qwaylandinputpanelshellintegration-.patch \
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
    python3-packaging-native \
"

inherit qt6-cmake
inherit pkgconfig
inherit python3native

EXTRA_OECMAKE += " \
    -Dwith-qt6=ON \
    -Denable-docs=OFF \
    -Denable-tests=OFF \
    -Denable-dbus-activation=ON \
    -DQtWaylandScanner_EXECUTABLE=${RECIPE_SYSROOT_NATIVE}/${libexecdir}/qtwaylandscanner \
    -DQT_PLUGINS_INSTALL_DIR=${QT6_INSTALL_PLUGINSDIR} \
    -DQT_MKSPECS_INSTALL_DIR=${QT6_INSTALL_MKSPECSDIR} \
    -DCMAKE_POSITION_INDEPENDENT_CODE=ON \
"

# workaround for leaked host paths by glib-genmarshal
# both are generated at compile time
do_compile:append() {
    sed -i 's:${S}::g' ${B}/maliitmarshallers.c
    sed -i 's:${S}::g' ${B}/maliitmarshallers.h
}

# workaround for leaked host paths to CMake imports
do_install:append() {
    if [ "0" -ne $(find ${D} \( -name "*.cmake" \) | wc -l) ]; then
        find ${D} \( -name "*.cmake" \) -exec \
            sed -i -e 's|${RECIPE_SYSROOT}/usr|\$\{_IMPORT_PREFIX\}|g' \
                {} \;
    fi
}


FILES:${PN} += " \
    ${libdir}/plugins \
    ${datadir}/dbus-1/ \
"

FILES:${PN}-dev += " \
    ${libdir}/mkspecs \
"
