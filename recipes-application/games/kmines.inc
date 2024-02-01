# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KMines"
DESCRIPTION = "KMines is the classic Minesweeper game"
HOMEPAGE = "https://invent.kde.org/games/kmines"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-or-later.txt;md5=9e2385fe012386d34dcc5c9863070881"
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
