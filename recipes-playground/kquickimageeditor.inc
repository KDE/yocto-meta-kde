# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KoKo Gallery Application"
HOMEPAGE = "https://invent.kde.org/libraries/kquickimageeditor/"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://LICENSES/LGPL-2.1-or-later.txt;md5=2a4f4fd2128ea2f65047ee63fbca9f68"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
"

SRC_URI = "git://invent.kde.org/libraries/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kdeapp
