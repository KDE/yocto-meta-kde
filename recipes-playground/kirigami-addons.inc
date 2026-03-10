# SPDX-FileCopyrightText: 2021-2023 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Kirigami Add-ons"
DESCRIPTION = "Add-ons for the Kirigami framework"
HOMEPAGE = "https://invent.kde.org/libraries/kirigami-addons"
LICENSE = "LGPL-2.1-or-later & BSD-2-Clause"

DEPENDS += "ki18n \
            kirigami \
            plasma-activities \
            qt5compat \
            qtdeclarative \
"

SRC_URI = "git://invent.kde.org/libraries/${BPN};nobranch=1;protocol=https"
S = "${UNPACKDIR}/git"

inherit cmake_kdeapp
inherit kf6-kconfig
inherit reuse_license_checksums
