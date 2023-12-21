# SPDX-FileCopyrightText: Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Collection of Arcade games developed in Kirigami"
HOMEPAGE = ""
LICENSE = "GPL-3.0-or-later"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-3.0-or-later.txt;md5=1c76c4cc354acaac30ed4d5eefea7245"
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

RDEPENDS:${PN} += " \
    qtdeclarative-qmlplugins \
    qtquickcontrols2-qmlplugins \
"

FILES:${PN} += "\
    ${datadir}/game/packages/org.kde.arkade.fourinline \
    ${datadir}/game/packages/org.kde.arkade.samegame \
    ${datadir}/game/packages/org.kde.arkade.blocktennis \
"
