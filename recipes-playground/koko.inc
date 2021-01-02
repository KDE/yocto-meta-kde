# SPDX-FileCopyrightText: 2019q-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KoKo Gallery Application"
HOMEPAGE = ""
LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
PR = "r0"

DEPENDS = " \
    qtlocation \
    kdeclarative \
    kiconthemes \
    kio \
    kirigami \
    knotifications \
    exiv2 \
"

SRC_URI = "git://invent.kde.org/plasma-mobile/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kdeapp
inherit kconfig
inherit kcoreaddons
inherit kauth
inherit mime-xdg
