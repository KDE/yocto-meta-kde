# SPDX-FileCopyrightText: Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Washipad"
DESCRIPTION = "Minimalist Sketchnoting Application"
HOMEPAGE = "https://invent.kde.org/graphics/washipad"
LICENSE = "GPL-3.0-only"
PR = "r0"

DEPENDS += "kdeclarative \
            kiconthemes \
            kirigami \
            kpackage \
            qtdeclarative \
"

SRC_URI = "git://invent.kde.org/graphics/${BPN};nobranch=1;protocol=https"
S = "${UNPACKDIR}/git"

inherit cmake_kdeapp
inherit mime-xdg
inherit reuse_license_checksums

RDEPENDS:${PN} += "qtdeclarative"
