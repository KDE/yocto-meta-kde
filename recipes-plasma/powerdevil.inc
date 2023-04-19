# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Powerdevil"
HOMEPAGE = ""
LICENSE = "GPL-2.0"
LIC_FILES_CHKSUM = "file://COPYING;md5=5c213a7de3f013310bd272cdb6eb7a24"
PR = "r0"

DEPENDS = " \
    kactivities \
    kidletime \
    kconfig \
    kdbusaddons \
    solid \
    kglobalaccel \
    kio \
    knotifyconfig \
    libkscreen \
    kwayland \
    kitemmodels \
    plasma-workspace \
    bluez-qt \
"

inherit cmake_plasma

FILES:${PN} += " \
    ${libdir}/plugins/plasma/kcms/systemsettings_qwidgets/* \
"
