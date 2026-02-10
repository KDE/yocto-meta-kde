# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KMines"
DESCRIPTION = "KMines is the classic Minesweeper game"
HOMEPAGE = "https://invent.kde.org/games/kmines"
LICENSE = "GPL-2.0-or-later"
PR = "r0"

DEPENDS += " \
    kconfigwidgets \
    kcrash \
    ki18n \
    ktextwidgets \
    kwidgetsaddons \
    kxmlgui \
    libkdegames \
"

inherit cmake_kdeapp
inherit kf6-kcoreaddons
inherit kf6-kconfig
inherit mime-xdg
inherit reuse_license_checksums
