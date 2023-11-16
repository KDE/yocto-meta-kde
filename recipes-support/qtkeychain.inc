# SPDX-FileCopyrightText: 2021-2022 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "QtKeychain"
HOMEPAGE = "https://github.com/frankosterfeld/qtkeychain"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://COPYING;md5=ebece3896618ecf0b60c4fade17f026f"
PR = "r0"

DEPENDS = " \
    qtbase \
    qttools \
    qttools-native \
    libsecret \
"

SRC_URI = "git://github.com/frankosterfeld/qtkeychain.git;nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit qt6-cmake
inherit pkgconfig

EXTRA_OECMAKE += " \
    -DBUILD_WITH_QT6=ON \
"


FILES:${PN} += " \
    ${datadir}/qt6keychain/translations \
"

FILES:${PN}-dev += " \
    ${prefix}/mkspecs \
"
