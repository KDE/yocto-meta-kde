# SPDX-FileCopyrightText: 2019-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KDialog"
LICENSE = "GPL-2.0-or-later"
PR = "r0"

DEPENDS += " \
    ktextwidgets \
    kio \
    knotifications \
    kguiaddons \
    kiconthemes \
    kwindowsystem \
    kdbusaddons\
"

inherit cmake_kdeapp
inherit kf6-kcoreaddons
inherit kf6-kconfig
inherit kf6-kauth
inherit reuse_license_checksums
