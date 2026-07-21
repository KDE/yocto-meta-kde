# SPDX-FileCopyrightText: 2023 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "QMLTermWidget"
DESCRIPTION = "QML port of qtermwidget"
HOMEPAGE = "https://github.com/Swordfish90/qmltermwidget"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4641e94ec96f98fabc56ff9cc48be14b"

DEPENDS += "qtbase \
            qtdeclarative \
            qttools \
            qttools-native \
"

SRC_URI = "git://github.com/Swordfish90/qmltermwidget.git;nobranch=1;protocol=https \
           file://0003-Remove-duplicate-files-from-install.patch \
"
SRCREV = "ce8e09ad4daeb9fe59b60d6b228b0f7cf4055e16"
S = "${UNPACKDIR}/git"

inherit qt6-qmake

FILES:${PN} += "${libdir}/qml/QMLTermWidget/*"
