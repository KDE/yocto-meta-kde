# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KRecorder"
DESCRIPTION = "Audio recorder for Plasma Mobile and other platforms"
HOMEPAGE = "https://invent.kde.org/plasma-mobile/krecorder"
LICENSE = "BSD-3-Clause | GPL-3.0-or-later"

DEPENDS += "kirigami \
            kirigami-addons \
            kwindowsystem \
            qtdeclarative \
            qtmultimedia \
            qtsvg \
"

inherit cmake_kdeapp
inherit kf6-kconfig
inherit kf6-kcoreaddons
inherit reuse_license_checksums
