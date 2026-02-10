# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Elisa"
DESCRIPTION = "Elisa music player"
HOMEPAGE = "https://apps.kde.org/de/elisa"
LICENSE = "LGPL-3.0-only"
PR = "r0"

DEPENDS += " \
    baloo \
    qtbase \
    qtdeclarative \
    qtmultimedia \
    kirigami \
    kirigami-addons \
    ki18n \
    kdeclarative \
    kfilemetadata \
    kxmlgui \
    kconfigwidgets \
    kcrash \
    kdbusaddons \
    qqc2-desktop-style \
"

inherit cmake_kdeapp
inherit kf6-kcoreaddons
inherit kf6-kconfig
inherit kf6-kauth
inherit mime-xdg
inherit reuse_license_checksums
