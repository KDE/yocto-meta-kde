# SPDX-FileCopyrightText: 2023 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "QMLTermWidget"
DESCRIPTION = "QML port of qtermwidget"
HOMEPAGE = "https://github.com/Swordfish90/qmltermwidget"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4641e94ec96f98fabc56ff9cc48be14b"
PR = "r0"

DEPENDS += "qtbase \
            qtdeclarative \
            qttools \
            qttools-native \
"

inherit qt6-qmake

FILES:${PN} += "${libdir}/qml/QMLTermWidget/*"
