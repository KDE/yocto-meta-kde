# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KSysguard"
HOMEPAGE = ""
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=5c213a7de3f013310bd272cdb6eb7a24"
PR = "r0"

DEPENDS = " \
    libnl \
    libpcap \
    kconfig \
    kcoreaddons \
    kdbusaddons \
    kiconthemes \
    kinit \
    kio \
    kitemviews \
    knewstuff \
    knotifications \
    kwindowsystem \
    libksysguard \
    libxml2-native \
    networkmanager-qt \
"

SRC_URI = "git://invent.kde.org/plasma/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_plasma
inherit kdoctools
inherit mime-xdg

FILES_SOLIBSDEV = ""

FILES_${PN} += " \
    ${libdir}/libksgrdbackend.so \
"
