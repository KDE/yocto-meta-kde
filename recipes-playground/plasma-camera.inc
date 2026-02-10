# SPDX-FileCopyrightText: 2019-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma Camera"
HOMEPAGE = "https://invent.kde.org/plasma-mobile/plasma-camera"
LICENSE = "GPL-3.0-or-later"
PR = "r0"

DEPENDS = " \
    kcoreaddons \
    kirigami \
    libplasma \
    kconfig \
    kconfig-native \
    qtsensors \
    libkexiv2 \
    libcamera \
"

SRC_URI = "git://invent.kde.org/plasma-mobile/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kdeapp
inherit reuse_license_checksums

RDEPENDS:${PN} += "qtmultimedia-qmlplugins"
