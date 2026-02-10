# SPDX-FileCopyrightText: Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Collection of Arcade games developed in Kirigami"
HOMEPAGE = ""
LICENSE = "GPL-3.0-or-later"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    kdeclarative \
    kiconthemes \
    kirigami \
    kpackage \
"

SRC_URI = "git://invent.kde.org/games/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kdeapp
inherit mime-xdg
inherit reuse_license_checksums

RDEPENDS:${PN} += " \
    qtdeclarative \
"

FILES:${PN} += "\
    ${datadir}/game/packages/org.kde.arkade.fourinline \
    ${datadir}/game/packages/org.kde.arkade.samegame \
    ${datadir}/game/packages/org.kde.arkade.blocktennis \
"
