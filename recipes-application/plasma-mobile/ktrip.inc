# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Public Transport Assistance for Mobile Devices"
HOMEPAGE = "https://invent.kde.org/utilities/ktrip"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-only.txt;md5=93e64b4a83c7e441e48bbdeeea05c977"
PR = "r0"

DEPENDS = " \
    qqc2-desktop-style \
    qtdeclarative \
    ki18n \
    kitemmodels \
    kcontacts \
    kirigami \
    kirigami-addons \
    kpublictransport \
"

inherit cmake_kdeapp
inherit kf6-kconfig
inherit kf6-kcoreaddons

RDEPENDS:${PN} += " \
    kirigami-addons \
"
