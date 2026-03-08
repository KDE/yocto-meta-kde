# SPDX-FileCopyrightText: 2020-2025 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "GCompris"
DESCRIPTION = "GCompris is a high quality educational software suite, \
               including a large number of activities for children aged 2 to 10."
HOMEPAGE = "https://gcompris.net"
LICENSE = "GPL-3.0-only"
PR = "r0"

DEPENDS += "kcrash \
            ki18n \
            kio \
            phonon \
            qml-box2d \
            qtcharts \
            qtdeclarative \
            qtmultimedia \
            qtsensors \
"

SRC_URI = "git://invent.kde.org/education/${BPN};nobranch=1;protocol=https"
S = "${UNPACKDIR}/git"

FILES:${PN} += "${datadir}/gcompris-qt/rcc \
                ${datadir}/gcompris-qt/translations \
"

RDEPENDS:${PN} += "qtdeclarative-qmlplugins \
                   qtmultimedia-qmlplugins \
"

inherit cmake_kdeapp
inherit kf6-kcoreaddons
inherit kf6-kconfig
inherit kf6-kauth
inherit mime-xdg
inherit reuse_license_checksums

EXTRA_OECMAKE += "-DQML_BOX2D_MODULE=system -DQML_BOX2D_LIBRARY=${STAGING_DIR_TARGET}/usr/lib/Box2D/libqmlbox2d.so"
