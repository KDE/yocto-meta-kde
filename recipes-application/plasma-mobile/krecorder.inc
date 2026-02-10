# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KRecorder"
HOMEPAGE = "https://invent.kde.org/plasma-mobile/krecorder"
LICENSE = "BSD-3-Clause | GPL-3.0-or-later"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    qtsvg \
    qtmultimedia \
    kirigami \
    kirigami-addons \
    kwindowsystem \
"

inherit cmake_kdeapp
inherit kf6-kconfig
inherit kf6-kcoreaddons
inherit reuse_license_checksums
