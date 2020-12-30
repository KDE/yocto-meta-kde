# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KHangMan"
DESCRIPTION = "KHangMan is a game based on the well-known hangman game."
HOMEPAGE = "https://edu.kde.org/khangman/"
LICENSE = "GPL-2.0"
LIC_FILES_CHKSUM = "file://COPYING;md5=cb56c8b10bbb1c97490192a78c4fb273"
PR = "r0"

DEPENDS += " \
    kcompletion \
    kcrash \
    ki18n \
    kio \
    knewstuff \
    knotifications \
    knotifyconfig \
    kparts \
    kxmlgui \
    libkeduvocdocument \
"

SRC_URI = "git://invent.kde.org/education/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kdeapp
inherit kcoreaddons
inherit kconfig
inherit kauth
inherit mime-xdg
