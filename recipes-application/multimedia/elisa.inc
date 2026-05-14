# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Elisa"
DESCRIPTION = "Elisa music player"
HOMEPAGE = "https://apps.kde.org/de/elisa"
LICENSE = "LGPL-3.0-only"

DEPENDS += "baloo \
            kconfigwidgets \
            kcrash \
            kdbusaddons \
            kdeclarative \
            kfilemetadata \
            ki18n \
            kirigami \
            kirigami-addons \
            kxmlgui \
            qqc2-desktop-style \
            qtdeclarative \
            qtmultimedia \
"

inherit cmake_kdeapp
inherit kf6_kcoreaddons
inherit kf6_kconfig
inherit kf6_kauth
inherit mime-xdg
inherit reuse_license_checksums
