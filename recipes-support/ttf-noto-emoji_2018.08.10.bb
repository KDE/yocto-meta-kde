# SPDX-FileCopyrightText: 2019 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2019 Hannah Kiekens <hannahkiekens@gmail.com>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Google Noto emoji fonts"
SECTION = "fonts"

HOMEPAGE = "https://www.google.com/get/noto/"
LICENSE = "OFL-1.1"

inherit allarch fontcache

INHIBIT_DEFAULT_DEPS = "1"

COMMIT = "3ffd20ec7504657aa17c84f9aa475ad09b20c362"
SRC_URI = "https://github.com/googlei18n/noto-emoji/archive/${COMMIT}.tar.gz"
SRC_URI[md5sum] = "0bc8ff9f326d5b34733f21e47e1efea1"
SRC_URI[sha256sum] = "02bba7f29a0fb02d468125150cbe05f3bef0037ccdebb87558f075bb570592d4"

LIC_FILES_CHKSUM = "file://LICENSE;md5=86d3f3a95c324c9479bd8986968f4327"

S = "${WORKDIR}/noto-emoji-${COMMIT}"

PACKAGES = "ttf-noto-emoji"
FONT_PACKAGES = "ttf-noto-emoji"

FILES_${PN}  = " ${datadir}/fonts/truetype/ "

do_compile[noexec] = "1"

do_install() {
    install -d ${D}${datadir}/fonts/truetype/
    find ./ -name '*.ttf' -exec install -m 0644 {} ${D}${datadir}/fonts/truetype/ \;
}
