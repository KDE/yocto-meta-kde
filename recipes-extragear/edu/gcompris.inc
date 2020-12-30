# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "GCompris"
DESCRIPTION = "GCompris is a high quality educational software suite, \
    including a large number of activities for children aged 2 to 10."
HOMEPAGE = "https://gcompris.net"
LICENSE = "GPL-3.0"
LIC_FILES_CHKSUM = "file://COPYING;md5=c678957b0c8e964aa6c70fd77641a71e"
PR = "r0"

DEPENDS += " \
    kcrash \
    ki18n \
    kio \
    phonon \
    qtbase \
    qtmultimedia \
    qtsensors \
    qtdeclarative \
"

RDEPENDS_${PN} += " \
    qtdeclarative-qmlplugins \
    qtgraphicaleffects-qmlplugins \
    qtmultimedia-qmlplugins \
"

SRC_URI = "git://invent.kde.org/education/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit qmake5_base
inherit cmake_kdeapp
inherit kcoreaddons
inherit kconfig
inherit kauth
inherit mime-xdg

FILES_${PN} += " \
    ${datadir}/gcompris-qt/rcc \
    ${datadir}/gcompris-qt/translations \
"
