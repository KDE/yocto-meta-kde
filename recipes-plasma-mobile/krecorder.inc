# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KRecorder"
HOMEPAGE = "https://invent.kde.org/plasma-mobile/krecorder"
LICENSE = "GPL-3.0"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-3.0-or-later;md5=2ee88b799b5c7e16153a00bbbbdaadb5"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    qtquickcontrols2 \
    qtsvg \
    qtmultimedia \
    kirigami \
"

SRC_URI = "git://invent.kde.org/plasma-mobile/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kdeapp
inherit kconfig
