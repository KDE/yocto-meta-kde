# SPDX-FileCopyrightText: 2019 Hannah Kiekens <hannahkiekens@gmail.com>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Google Noto fonts"
SECTION = "fonts"

HOMEPAGE = "https://www.google.com/get/noto/"
LICENSE = "OFL-1.1"

inherit allarch fontcache

INHIBIT_DEFAULT_DEPS = "1"

SRC_URI = "git://github.com/googlefonts/noto-fonts;protocol=https;nobranch=1"
SRCREV = "c30307083469f0c05e216ac75216fd454a517858"

SRC_URI[md5sum] = "699fd3e70f293e58e628dfbc34ece0b0"
SRC_URI[sha256sum] = "2c55a0422a8d51425dc2f000e7c67139f1d2756ee93568389bdeb8e2c51e1934"

LIC_FILES_CHKSUM = "file://LICENSE;md5=fce5baa9b16328f04e2afc29f6e4e882"

S = "${WORKDIR}/git"

PACKAGES = "ttf-noto"
FONT_PACKAGES = "ttf-noto"

FILES_${PN}  = " ${datadir}/fonts/truetype/ "

do_install() {
    install -d ${D}${datadir}/fonts/truetype/
    find ./hinted/ -name '*.tt[cf]' -exec install -m 0644 {} ${D}${datadir}/fonts/truetype/ \;
    find ./unhinted/ -name '*.tt[cf]' -exec install -m 0644 {} ${D}${datadir}/fonts/truetype/ \;
}
