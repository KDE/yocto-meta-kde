# SPDX-FileCopyrightText: 2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KWayland Server"
HOMEPAGE = ""
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = " \
    file://LICENSES/LGPL-2.1-only.txt;md5=fabba2a3bfeb22a6483d44e9ae824d3f \
"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtwayland \
    qtwayland-native \
    kwayland \
    plasma-wayland-protocols \
    qtwaylandscanner-kde-native \
"

SRC_URI = "git://invent.kde.org/plasma/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_plasma
