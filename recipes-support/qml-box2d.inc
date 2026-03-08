# SPDX-FileCopyrightText: 2025 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "QML Box2D"
DESCRIPTION = "Box2D QML plugin"
HOMEPAGE = "https://github.com/qml-box2d/qml-box2d"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://COPYING;md5=7c1ecaedec0d10ec77d289e71b42165f"
PR = "r0"

DEPENDS += "qtbase \
            qtdeclarative \
            qtdeclarative-native \
"

inherit qt6-cmake

FILES:${PN} += "${libdir}/Box2D/*"
