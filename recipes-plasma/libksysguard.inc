# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Alistair Francis <alistair.francis@wdc.com>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KSysGuard library"
HOMEPAGE = ""
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = " \
    libnl \
    libpcap \
    kcompletion \
    kconfig \
    kconfigwidgets \
    kcoreaddons \
    kiconthemes \
    knewstuff \
    kservice \
    kwidgetsaddons \
    kwindowsystem \
    networkmanager-qt \
    plasma-framework \
    qtwebchannel \
"

SRC_URI = "git://invent.kde.org/plasma/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_plasma

FILES_${PN} += " \
    ${datadir}/ksysguard \
    ${libdir}/qml \
"
