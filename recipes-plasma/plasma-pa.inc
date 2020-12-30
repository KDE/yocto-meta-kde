# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma PA"
HOMEPAGE = ""
LICENSE = "GPL-2"
LIC_FILES_CHKSUM = "file://COPYING;md5=5c213a7de3f013310bd272cdb6eb7a24"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    kcoreaddons \
    kdeclarative \
    kglobalaccel \
    plasma-framework \
    pulseaudio \
    libcanberra \
"

SRC_URI = "git://invent.kde.org/plasma/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_plasma
inherit kdoctools

FILES_${PN} += " \
    ${libdir}/qml/org/kde/plasma/private/volume/* \
    ${datadir}/kpackage/kcms/kcm_pulseaudio \
    ${datadir}/plasma/plasmoids/org.kde.plasma.volume \
    ${datadir}/kde4/apps/kconf_update/* \
"

RDEPENDS_${PN} += "perl"
