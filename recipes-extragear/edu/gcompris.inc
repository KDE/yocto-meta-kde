# SPDX-FileCopyrightText: 2020-2025 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "GCompris"
DESCRIPTION = "GCompris is a high quality educational software suite, \
    including a large number of activities for children aged 2 to 10."
HOMEPAGE = "https://gcompris.net"
LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-3.0-only.txt;md5=49fc03046e56a282c0c743b5d3a55b7c"
PR = "r0"

DEPENDS += " \
    kcrash \
    ki18n \
    kio \
    phonon \
    qtbase \
    qtcharts \
    qtmultimedia \
    qtsensors \
    qtdeclarative \
    qml-box2d \
"

RDEPENDS:${PN} += " \
    qtdeclarative-qmlplugins \
    qtmultimedia-qmlplugins \
"

SRC_URI = "git://invent.kde.org/education/${BPN};nobranch=1;protocol=https"

S = "${WORKDIR}/git"

inherit cmake_kdeapp
inherit kf6-kcoreaddons
inherit kf6-kconfig
inherit kf6-kauth
inherit mime-xdg

EXTRA_OECMAKE += "-DQML_BOX2D_MODULE=system -DQML_BOX2D_LIBRARY=${STAGING_DIR_TARGET}/usr/lib/Box2D/libqmlbox2d.so"

FILES:${PN} += " \
    ${datadir}/gcompris-qt/rcc \
    ${datadir}/gcompris-qt/translations \
"
