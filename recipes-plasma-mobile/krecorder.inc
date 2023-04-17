# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KRecorder"
HOMEPAGE = "https://invent.kde.org/plasma-mobile/krecorder"
LICENSE = "GPL-3.0"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-3.0-or-later.txt;md5=8da5784ab1c72e63ac74971f88658166"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    qtquickcontrols2 \
    qtsvg \
    qtmultimedia \
    kirigami \
    kirigami-addons \
    kwindowsystem \
"

inherit cmake_kdeapp
inherit kf6-kconfig
inherit kf6-kcoreaddons
