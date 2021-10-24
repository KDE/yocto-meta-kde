# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KWayland Integration"
HOMEPAGE = ""
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://LICENSES/LGPL-2.1-only.txt;md5=fabba2a3bfeb22a6483d44e9ae824d3f"
PR = "r0"

DEPENDS = " \
    kidletime \
    kwindowsystem \
    kguiaddons \
    kwayland \
    qtwayland-native \
"

inherit cmake_plasma

FILES_${PN} += " \
    ${libdir}/plugins/kf5/kguiaddons \
"
