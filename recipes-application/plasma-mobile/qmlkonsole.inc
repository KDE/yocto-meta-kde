# SPDX-FileCopyrightText: 2023 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "QMLKonsole"
DESCRIPTION = "Terminal app for Plasma Mobile"
HOMEPAGE = "https://invent.kde.org/plasma-mobile/qmlkonsole"
LICENSE = "GPL-2.0-or-later"
PR = "r0"

DEPENDS += "kconfig \
            kconfig-native \
            ki18n \
            kirigami \
            kirigami-addons \
            kpty \
            kwindowsystem \
            qtdeclarative \
"

inherit cmake_kdeapp
inherit kf6-kcoreaddons
inherit mime-xdg
inherit reuse_license_checksums

RDEPENDS:${PN} += "qmltermwidget \
                   qtdeclarative-qmlplugins \
"
