# SPDX-FileCopyrightText: Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Arkade"
DESCRIPTION = "Collection of Arcade games developed in Kirigami"
HOMEPAGE = "https://invent.kde.org/games/arkade"
LICENSE = "GPL-3.0-or-later"

DEPENDS += "kdeclarative \
            kiconthemes \
            kirigami \
            kpackage \
            qtdeclarative \
"

SRC_URI = "git://invent.kde.org/games/${BPN};nobranch=1;protocol=https"
S = "${UNPACKDIR}/git"

inherit cmake_kdeapp
inherit mime-xdg
inherit reuse_license_checksums

FILES:${PN} += "${datadir}/game/packages/org.kde.arkade.fourinline \
                ${datadir}/game/packages/org.kde.arkade.samegame \
                ${datadir}/game/packages/org.kde.arkade.blocktennis \
"

RDEPENDS:${PN} += "qtdeclarative"
