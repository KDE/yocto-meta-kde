# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Alistair Francis <alistair.francis@wdc.com>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KSysGuard library"
HOMEPAGE = ""
LICENSE = "LGPL-2.1-only"
PR = "r0"

DEPENDS = " \
    libnl \
    libcap \
    libpcap \
    lmsensors \
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
    libplasma \
    qtwebchannel \
    libpcap \
    libcap \
"

inherit cmake_plasma
inherit reuse_license_checksums

FILES:${PN} += " \
    ${datadir}/ksysguard \
    ${libdir}/qml \
"
