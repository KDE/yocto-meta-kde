# SPDX-FileCopyrightText: 2021-2022 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "QtKeychain"
DESCRIPTION = "Platform-independent Qt API for storing passwords securely"
HOMEPAGE = "https://github.com/frankosterfeld/qtkeychain"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://COPYING;md5=ebece3896618ecf0b60c4fade17f026f"

DEPENDS += "libsecret \
            qtbase \
            qttools \
            qttools-native \
"

inherit qt6-cmake
inherit pkgconfig

EXTRA_OECMAKE += "-DBUILD_WITH_QT6=ON"

FILES:${PN} += "${datadir}/qt6keychain/translations"

FILES:${PN}-dev += "${prefix}/mkspecs"
