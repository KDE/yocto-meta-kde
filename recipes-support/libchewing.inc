# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.1-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=4fbd65380cdd255951079008b364516c"
SUMMARY = "The intelligent phonetic input method library"

SRC_URI = " \
    git://github.com/chewing/libchewing.git;nobranch=1;protocol=https \
    file://0001-Cross-compilation-options.patch \
    file://0002-Disable-genkeystroke-testapp.patch \
"

S = "${WORKDIR}/git"

DEPENDS = " \
    ncurses \
    sqlite3 \
    ${PN}-native \
"

DEPENDS:class-native = " \
    ncurses \
    sqlite3-native \
"

inherit cmake

EXTRA_OECMAKE += "-DUSE_TOOLS_FROM_PATH=ON"
EXTRA_OECMAKE:class-native += "-DINSTALL_TOOLS=ON"

BBCLASSEXTEND = "native"
