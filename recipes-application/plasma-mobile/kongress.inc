# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Companion application for conferences"
HOMEPAGE = "https://invent.kde.org/utilities/kongress"
LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-3.0-or-later.txt;md5=1c76c4cc354acaac30ed4d5eefea7245"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    qtsvg \
    kcalendarcore \
    kdbusaddons \
    kirigami \
    kirigami-addons \
    knotifications \
    kosmindoormap \
"

inherit cmake_kdeapp
inherit kf6-kconfig
