# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=d32239bcb673463ab874e80d47fae504"
SUMMARY = "Library to deal with pinyin."

SRC_URI = " \
    git://github.com/libpinyin/libpinyin.git;nobranch=1;protocol=https \
    https://downloads.sourceforge.net/project/libpinyin/models/model19.text.tar.gz;sha256sum=56422a4ee5966c2c809dd065692590ee8def934e52edbbe249b8488daaa1f50b;subdir=git;unpack=0 \
    file://0000-Utilize-bitbake-download-and-use-tools-from-PATH.patch \
    file://0001-Optionally-install-utilities.patch \
    file://0002-Provide-option-to-use-pre-downloaded-archive.patch \
    file://0003-Add-option-to-disable-data-generation.patch \
"
SRC_URI:class-native = " \
    git://github.com/libpinyin/libpinyin.git;nobranch=1;protocol=https \
    file://0001-Optionally-install-utilities.patch \
    file://0002-Provide-option-to-use-pre-downloaded-archive.patch \
    file://0003-Add-option-to-disable-data-generation.patch \
"

S = "${WORKDIR}/git"

DEPENDS = " \
    db \
    glib-2.0 \
    libpinyin-native \
"
DEPENDS:class-native = " \
    db-native \
    glib-2.0-native \
"

inherit cmake

EXTRA_OECMAKE += "-DDOWNLOAD_MODEL_DATA_ARCHIVE=OFF"
EXTRA_OECMAKE:class-native += "-DINSTALL_UTILS=ON -DDISABLE_DATA_GENERATION=ON"

# workaround for generator that can be executed only once:
# https://github.com/libpinyin/libpinyin/issues/128
do_install:prepend() {
    rm -f ${WORKDIR}/build/data/*.bin
    rm -f ${WORKDIR}/build/data/*.db
}

BBCLASSEXTEND = "native"
