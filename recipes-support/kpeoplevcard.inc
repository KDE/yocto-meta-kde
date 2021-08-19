# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KPeople VCard Backend"
DESCRIPTION = "Expose VCard contacts to KPeople"
HOMEPAGE = "https://invent.kde.org/pim/kpeoplevcard"
LICENSE = "LGPL-2.1+ & BSD-3-Clause"
LIC_FILES_CHKSUM = " \
    file://COPYING;md5=4fbd65380cdd255951079008b364516c \
"
PR = "r0"

DEPENDS = " \
    qtbase \
    kpeople \
    kcontacts \
    ki18n \
"

SRC_URI = "git://invent.kde.org/pim/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit kconfig
inherit kcoreaddons
inherit cmake_kdeapp
inherit mime-xdg
