# SPDX-FileCopyrightText: 2019-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KoKo Gallery Application"
HOMEPAGE = "https://invent.kde.org/graphics/koko/-"
LICENSE = "LGPL-2.1-only"
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

inherit cmake_kdeapp
inherit kf6-kconfig
inherit kf6-kcoreaddons
inherit kf6-kauth
inherit mime-xdg

RDEPENDS:${PN} += " \
    qtdeclarative-qmlplugins \
    purpose \
    kirigami \
"
