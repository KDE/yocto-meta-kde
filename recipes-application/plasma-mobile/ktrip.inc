# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KTrip"
DESCRIPTION = "Public Transport Assistance for Mobile Devices"
HOMEPAGE = "https://invent.kde.org/utilities/ktrip"
LICENSE = "GPL-2.0-only"

DEPENDS += "kcontacts \
            ki18n \
            kirigami \
            kirigami-addons \
            kitemmodels \
            kpublictransport \
            qqc2-desktop-style \
            qtdeclarative \
"

inherit cmake_kdeapp
inherit kf6-kconfig
inherit kf6-kcoreaddons
inherit reuse_license_checksums

RDEPENDS:${PN} += "kirigami-addons"
