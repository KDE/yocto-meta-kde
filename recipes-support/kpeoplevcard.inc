# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KPeople VCard Backend"
DESCRIPTION = "Expose VCard contacts to KPeople"
HOMEPAGE = "https://invent.kde.org/pim/kpeoplevcard"
LICENSE = "LGPL-2.1-or-later & BSD-3-Clause"
LIC_FILES_CHKSUM = " \
    file://LICENSES/LGPL-2.1-or-later.txt;md5=147a320ed8b16b036829a0c71d424153 \
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

inherit kf6-kconfig
inherit kf6-kcoreaddons
inherit cmake_kdeapp
inherit mime-xdg
