# SPDX-FileCopyrightText: Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Minimalist Sketchnoting Application"
HOMEPAGE = ""
LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-3.0-only.txt;md5=49fc03046e56a282c0c743b5d3a55b7c"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    kdeclarative \
    kiconthemes \
    kirigami \
    kpackage \
"

SRC_URI = "git://invent.kde.org/graphics/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kdeapp
inherit mime-xdg

RDEPENDS:${PN} += " \
    qtdeclarative \
"
