# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Public Transport Assistance for Mobile Devices"
HOMEPAGE = "https://invent.kde.org/utilities/ktrip"
LICENSE = "GPL-2.0-only"
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
inherit reuse_license_checksums

RDEPENDS:${PN} += " \
    kirigami-addons \
"
