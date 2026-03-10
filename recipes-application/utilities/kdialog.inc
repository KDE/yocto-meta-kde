# SPDX-FileCopyrightText: 2019-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KDialog"
DESCRIPTION = "Tool to show nice dialog boxes from shell scripts"
HOMEPAGE = "https://invent.kde.org/utilities/kdialog"
LICENSE = "GPL-2.0-or-later"

DEPENDS += "kdbusaddons\
            kguiaddons \
            kiconthemes \
            kio \
            knotifications \
            ktextwidgets \
            kwindowsystem \
"

inherit cmake_kdeapp
inherit kf6-kcoreaddons
inherit kf6-kconfig
inherit kf6-kauth
inherit reuse_license_checksums
