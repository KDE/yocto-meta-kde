# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Plasma System Monitor"
DESCRIPTION = "An interface for monitoring system sensors, process information and other system resources"
HOMEPAGE = "https://invent.kde.org/plasma/plasma-systemmonitor"
LICENSE = "GPL-2.0 | GPL-3.0"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-only.txt;md5=93e64b4a83c7e441e48bbdeeea05c977"
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
"

SRC_URI = "git://invent.kde.org/plasma/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_plasma
inherit kdoctools

FILES_${PN} += " \
    ${datadir}/ksysguard/sensorfaces/ \
    ${libdir}/qml/org/kde/ksysguard/table/ \
    ${libdir}/qml/org/kde/ksysguard/page/ \
"
