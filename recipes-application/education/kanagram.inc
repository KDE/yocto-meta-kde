# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Kanagram"
DESCRIPTION = "Kanagram is a game based on anagrams of words: the puzzle is solved when \
    the letters of the scrambled word are put back in the correct order"
HOMEPAGE = "https://edu.kde.org/kanagram/"
LICENSE = "GPL-2.0"
LIC_FILES_CHKSUM = "file://COPYING;md5=751419260aa954499f7abaabaa882bbe"
PR = "r0"

DEPENDS += " \
    kcrash \
    ki18n \
    kio \
    knewstuff \
    knotifications \
    knotifyconfig \
    libkeduvocdocument \
"

inherit cmake_kdeapp
inherit kcoreaddons
inherit kconfig
inherit kauth
inherit mime-xdg

RDEPENDS_${PN} += " \
    kdeedu-data \
"
