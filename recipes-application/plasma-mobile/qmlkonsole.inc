# SPDX-FileCopyrightText: 2023 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Terminal app for Plasma Mobile"
HOMEPAGE = "https://invent.kde.org/plasma-mobile/qmlkonsole"
LICENSE = "GPL-2.0-or-later"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    kconfig \
    kconfig-native \
    ki18n \
    kirigami \
    kirigami-addons \
    kwindowsystem \
    kpty \
"

inherit cmake_kdeapp
inherit kf6-kcoreaddons
inherit mime-xdg
inherit reuse_license_checksums

RDEPENDS:${PN} += " \
    qtdeclarative-qmlplugins \
    qmltermwidget \
"
