# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Blinken"
DESCRIPTION = "Memory Enhancement Game"
HOMEPAGE = "https://edu.kde.org/blinken/"
LICENSE = "GPL-2.0"
LIC_FILES_CHKSUM = "file://COPYING;md5=751419260aa954499f7abaabaa882bbe"
PR = "r0"

DEPENDS += " \
    kcrash \
    ki18n \
    kio \
    phonon \
"

SRC_URI = "git://invent.kde.org/education/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kdeapp
inherit kcoreaddons
inherit kconfig
inherit kauth
inherit mime-xdg
