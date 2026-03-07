# SPDX-FileCopyrightText: 2019-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Plasma Camera"
DESCRIPTION = "Camera application for Plasma Mobile"
HOMEPAGE = "https://invent.kde.org/plasma-mobile/plasma-camera"
LICENSE = "GPL-3.0-or-later"
PR = "r0"

DEPENDS += "kconfig \
            kconfig-native \
            kcoreaddons \
            kirigami \
            libcamera \
            libkexiv2 \
            libplasma \
            qtsensors \
"

SRC_URI = "git://invent.kde.org/plasma-mobile/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kdeapp
inherit reuse_license_checksums

RDEPENDS:${PN} += "qtmultimedia-qmlplugins"
