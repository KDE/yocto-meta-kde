# SPDX-FileCopyrightText: 2019 Hannah Kiekens <hannahkiekens@gmail.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Google Noto fonts"
DESCRIPTION = "Collection of high-quality fonts with multiple weights and widths in sans, serif, mono, and other styles"
HOMEPAGE = "https://www.google.com/get/noto/"
SECTION = "fonts"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=86d3f3a95c324c9479bd8986968f4327"

inherit allarch fontcache

INHIBIT_DEFAULT_DEPS = "1"

SRC_URI = "git://github.com/notofonts/notofonts.github.io;protocol=https;nobranch=1"
SRCREV = "cc22e3ec1491171c13ccf17b6297ac666b2c0112"

PACKAGES = "ttf-noto"
FONT_PACKAGES = "ttf-noto"

FILES:${PN} += "${datadir}/fonts/truetype/"

do_install() {
    install -d ${D}${datadir}/fonts/truetype/
    # install hinted and unhinted ttf fonts
    find ${S}/fonts -wholename '*hinted/*.tt[cf]' -exec install -m 0644 {} ${D}${datadir}/fonts/truetype/ \;
}
