# SPDX-FileCopyrightText: 2019-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Calindori"
HOMEPAGE = "https://invent.kde.org/plasma-mobile/calindori"
LICENSE = "GPL-3.0"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-3.0-or-later.txt;md5=1c76c4cc354acaac30ed4d5eefea7245"
PR = "r0"

DEPENDS = " \
    kconfig \
    kcalendarcore \
    kirigami \
    kpeople \
    plasma-framework \
"

SRC_URI = "git://invent.kde.org/plasma-mobile/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kdeapp
inherit kconfig
inherit mime-xdg
