# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "qtwaylandscanner temporary fork (really KWayland Server repository subset)"
HOMEPAGE = "https://invent.kde.org/plasma/kwayland-server/"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://LICENSES/LGPL-2.1-only.txt;md5=fabba2a3bfeb22a6483d44e9ae824d3f"
PR = "r0"

BBCLASSEXTEND = "native nativesdk"

DEPENDS = " \
    qtbase \
    extra-cmake-modules \
"

SRC_URI = " \
    git://invent.kde.org/plasma/kwayland-server;nobranch=1;protocol=https \
    file://fake_project_root.patch \
"
S = "${WORKDIR}/git"

OECMAKE_SOURCEPATH = "${S}/src/tools"

inherit cmake_qt5

do_install() {
    install -d ${D}/${bindir}
    cp ${B}/qtwaylandscanner_kde ${D}/${bindir}
}
