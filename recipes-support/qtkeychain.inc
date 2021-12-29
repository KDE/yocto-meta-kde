# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "QtKeychain"
HOMEPAGE = "https://github.com/frankosterfeld/qtkeychain"
LICENSE = "BSD-2-Clause"
LIC_FILES_CHKSUM = "file://COPYING;md5=5c262c13b60ebefe3060aed37d334ab6"
PR = "r0"

DEPENDS = " \
    qtbase \
    qttools \
    qttools-native \
    libsecret \
"

SRC_URI = "git://github.com/frankosterfeld/qtkeychain.git;nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_qt5

FILES:${PN} += " \
    ${datadir}/qt5keychain/translations \
"

FILES:${PN}-dev += " \
    ${prefix}/mkspecs \
"
