# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Clock app for Plasma Mobile"
HOMEPAGE = ""
LICENSE = "GPL-2.0 | GPL-3.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=b234ee4d69f5fce4486a80fdaf4a4263"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    qtmultimedia \
    kdeclarative \
    kiconthemes \
    ki18n \
    kirigami \
    knotifications \
    plasma-framework \
"

SRC_URI ?= "git://invent.kde.org/plasma-mobile/${BPN};nobranch=1;protocol=https"

inherit cmake_kdeapp
inherit kconfig
inherit kcoreaddons
inherit kauth
inherit mime-xdg

RDEPENDS_${PN} += " \
    qtdeclarative-qmlplugins \
    qtquickcontrols2-qmlplugins \
"

FILES_${PN} += " \
    ${datadir}/plasma/plasmoids/ \
"
