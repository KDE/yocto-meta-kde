# SPDX-FileCopyrightText: 2022 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Aura Browser"
HOMEPAGE = "https://invent.kde.org/plasma-bigscreen/aura-browser/"
LICENSE = "GPL-2.0+ & GPL-3.0+"
LIC_FILES_CHKSUM = " \
    file://LICENSES/GPL-2.0-or-later.txt;md5=fed54355545ffd980b814dab4a3b312c \
    file://LICENSES/GPL-3.0-or-later.txt;md5=1ebbd3e34237af26da5dc08a4e440464 \
"
PR = "r0"

DEPENDS = " \
    kirigami \
    qtdeclarative \
    qtmultimedia \
    qtwebengine \
"

inherit cmake_plasma
inherit mime-xdg
