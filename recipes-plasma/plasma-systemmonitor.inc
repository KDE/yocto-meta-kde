# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Plasma System Monitor"
DESCRIPTION = "An interface for monitoring system sensors, process information and other system resources"
HOMEPAGE = "https://invent.kde.org/plasma/plasma-systemmonitor"
LICENSE = "GPL-2.0-only | GPL-3.0-only"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    ki18n \
    kitemmodels \
    kconfig \
    kdeclarative \
    kservice \
    kglobalaccel \
    kio \
    kdbusaddons \
    knewstuff \
    libksysguard \
    kirigami-addons \
"

RDEPENDS:${PN} = "ksystemstats"

inherit cmake_plasma
inherit kf6-kdoctools
inherit reuse_license_checksums

FILES_SOLIBSDEV = ""
FILES:${PN} += " \
    ${datadir}/kglobalaccel/ \
    ${datadir}/ksysguard/sensorfaces/ \
    ${datadir}/plasma/kinfocenter/externalmodules/ \
    ${libdir}/qml/org/kde/ksysguard/table/ \
    ${libdir}/qml/org/kde/ksysguard/page/ \
    ${libdir}/libPlasmaSystemMonitorTable.so \
    ${libdir}/libPlasmaSystemMonitorPage.so \
"

# Do not try to detect the ksystemstats runtime at configure, hardcode
# a value to skip detection.
EXTRA_OECMAKE:append = " \
    -Dksystemstats_EXE=/usr/bin/ksystemstats \
"
