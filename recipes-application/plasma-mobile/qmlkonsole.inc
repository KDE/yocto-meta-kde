# SPDX-FileCopyrightText: 2023 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Terminal app for Plasma Mobile"
HOMEPAGE = "https://invent.kde.org/plasma-mobile/qmlkonsole"
LICENSE = "GPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-or-later.txt;md5=9e2385fe012386d34dcc5c9863070881"
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

RDEPENDS:${PN} += " \
    qtdeclarative-qmlplugins \
    qmltermwidget \
"
