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
    libxml2-native \
    kconfig \
    kcoreaddons \
    kdbusaddons \
    kiconthemes \
    kinit \
    kitemviews \
    kio \
    knewstuff \
    knotifications \
    kwindowsystem \
    libksysguard \
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
