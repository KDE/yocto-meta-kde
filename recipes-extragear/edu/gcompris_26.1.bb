# SPDX-FileCopyrightText: 2020-2025 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "GCompris"
DESCRIPTION = "GCompris is a high quality educational software suite, \
               including a large number of activities for children aged 2 to 10."
HOMEPAGE = "https://gcompris.net"
LICENSE = "GPL-3.0-only"

DEPENDS += "kcrash \
            ki18n \
            kio \
            qml-box2d \
            qtcharts \
            qtdeclarative \
            qtgraphs \
            qtmultimedia \
            qtquick3d \
            qtquick3d-native \
            qtsensors \
"

SRC_URI = "git://invent.kde.org/education/${BPN};nobranch=1;protocol=https"

# V26.1
SRCREV = "ccf1d1fa07b4ebb17e928e4f9628e5105b42ce60"

FILES:${PN} += "${datadir}/gcompris-qt/rcc \
                ${datadir}/gcompris-qt/translations \
"

RDEPENDS:${PN} += "qtdeclarative-qmlplugins \
                   qtmultimedia-qmlplugins \
"

inherit cmake_kdeapp
inherit kf6_kcoreaddons
inherit kf6_kconfig
inherit kf6_kauth
inherit mime-xdg
inherit reuse_license_checksums

EXTRA_OECMAKE += "-DQML_BOX2D_MODULE=system -DQML_BOX2D_LIBRARY=${STAGING_DIR_TARGET}/usr/lib/Box2D/libqmlbox2d.so"
