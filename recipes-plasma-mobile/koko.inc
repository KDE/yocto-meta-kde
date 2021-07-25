# SPDX-FileCopyrightText: 2019-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KoKo Gallery Application"
HOMEPAGE = "https://invent.kde.org/graphics/koko/-"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://LICENSES/LGPL-2.1-only.txt;md5=fabba2a3bfeb22a6483d44e9ae824d3f"
PR = "r0"

DEPENDS = " \
    qtlocation \
    kdeclarative \
    kiconthemes \
    kio \
    kirigami \
    kfilemetadata \
    knotifications \
    kquickimageeditor \
    exiv2 \
"

SRC_URI ?= "git://invent.kde.org/graphics/${BPN};nobranch=1;protocol=https"

inherit cmake_kdeapp
inherit kconfig
inherit kcoreaddons
inherit kauth
inherit mime-xdg

RDEPENDS_${PN} += " \
    qtgraphicaleffects-qmlplugins \
"
