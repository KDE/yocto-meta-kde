# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "libkdegames"
DESCRIPTION = "Common code and data for many KDE games"
HOMEPAGE = "https://invent.kde.org/games/libkdegames"
LICENSE = "GPL-2.0-or-later"
PR = "r0"

DEPENDS += "karchive \
            kcolorscheme \
            kconfigwidgets \
            kdnssd \
            kguiaddons \
            kiconthemes \
            knewstuff \
            kxmlgui \
            openal-soft \
            qtdeclarative \
"

inherit cmake_kdeapp
inherit kf6-kconfig
inherit reuse_license_checksums

FILES:${PN} += "${datadir}/carddecks/*"
