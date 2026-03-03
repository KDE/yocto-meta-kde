# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "PowerDevil"
DESCRIPTION = "Manages the power consumption settings of a Plasma shell"
HOMEPAGE = "https://invent.kde.org/plasma/powerdevil"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=5c213a7de3f013310bd272cdb6eb7a24"
PR = "r0"

DEPENDS += "bluez-qt \
            ddcutil \
            kconfig \
            kdbusaddons \
            kglobalaccel \
            kidletime \
            kio \
            kitemmodels \
            knotifyconfig \
            kwayland \
            libkscreen \
            plasma-activities \
            plasma-workspace \
            qtwayland-native \
            solid \
"

inherit cmake_plasma

FILES:${PN} += "${libdir}/plugins/plasma/kcms/systemsettings_qwidgets/* \
                ${libdir}/plugins/powerdevil/action/kcm/* \
                ${libdir}/qml/org/kde/plasma/private/* \
                ${datadir}/plasma/plasmoids/* \
"
