# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Framework for interacting with systemd-journald"
HOMEPAGE = ""
LICENSE = "MIT | LGPL-2.1+"
LIC_FILES_CHKSUM = " \
    file://LICENSES/MIT.txt;md5=4dd71a82d66fd9e3ca0cc65b8be370c0 \
    file://LICENSES/LGPL-2.1-or-later.txt;md5=147a320ed8b16b036829a0c71d424153 \
"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    systemd \
"

SRC_URI = "git://invent.kde.org/libraries/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kdeapp
inherit pkgconfig

PACKAGES += " \
    ${PN}-browser \
"

FILES:${PN} = " \
    ${libdir} \
"

FILES:${PN}-browser = " \
    ${bindir}/journald-browser \
    ${datadir}/applications \
    ${datadir}/metainfo \
"

RDEPENDS:${PN}-browser += " \
    qtdeclarative-qmlplugins \
"
