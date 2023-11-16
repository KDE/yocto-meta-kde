# SPDX-FileCopyrightText: 2023 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "PulseAudio-Qt"
HOMEPAGE = "https://invent.kde.org/libraries/pulseaudio-qt"
LICENSE = "LGPL-2.1-only"
LIC_FILES_CHKSUM = " \
    file://LICENSES/LGPL-2.1-only.txt;md5=fabba2a3bfeb22a6483d44e9ae824d3f \
"
PR = "r0"

DEPENDS = " \
    qtbase \
    pulseaudio \
"

SRC_URI = "git://invent.kde.org/libraries/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kdeapp
