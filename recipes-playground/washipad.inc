# SPDX-FileCopyrightText: Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Minimalist Sketchnoting Application"
HOMEPAGE = ""
LICENSE = "GPL-3.0-only"
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
inherit reuse_license_checksums

RDEPENDS:${PN} += " \
    qtdeclarative \
"
