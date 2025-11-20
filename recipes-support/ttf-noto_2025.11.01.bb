# SPDX-FileCopyrightText: 2019 Hannah Kiekens <hannahkiekens@gmail.com>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Google Noto fonts"
SECTION = "fonts"

HOMEPAGE = "https://www.google.com/get/noto/"
LICENSE = "Apache-2.0"

inherit allarch fontcache

INHIBIT_DEFAULT_DEPS = "1"

SRC_URI = "git://github.com/notofonts/notofonts.github.io;protocol=https;nobranch=1"
SRCREV = "7eb462dbfc5fe79b18ea35e7f1773f9495b8a1c6"

SRC_URI[md5sum] = "699fd3e70f293e58e628dfbc34ece0b0"
SRC_URI[sha256sum] = "2c55a0422a8d51425dc2f000e7c67139f1d2756ee93568389bdeb8e2c51e1934"

LIC_FILES_CHKSUM = "file://LICENSE;md5=86d3f3a95c324c9479bd8986968f4327"

S = "${WORKDIR}/git"

PACKAGES = "ttf-noto"
FONT_PACKAGES = "ttf-noto"

FILES:${PN}  = " ${datadir}/fonts/truetype/ "

do_install() {
    install -d ${D}${datadir}/fonts/truetype/
    # install hinted and unhinted ttf fonts
    find ${S}/fonts -wholename '*hinted/*.tt[cf]' -exec install -m 0644 {} ${D}${datadir}/fonts/truetype/ \;
}
