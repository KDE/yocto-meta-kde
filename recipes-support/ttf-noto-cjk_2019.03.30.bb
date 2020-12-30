# SPDX-FileCopyrightText: 2019 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Google Noto CJK fonts"
SECTION = "fonts"
HOMEPAGE = "https://www.google.com/get/noto/"
LICENSE = "OFL-1.1"
LIC_FILES_CHKSUM = "file://LICENSE;md5=55719faa0112708e946b820b24b14097"

inherit allarch fontcache

INHIBIT_DEFAULT_DEPS = "1"

SRC_URI = "git://github.com/googlei18n/noto-cjk.git;nobranch=1"
SRCREV = "9326451d9b4f32ec7f8640581c5053cc192039f2"
S = "${WORKDIR}/git"

PACKAGES = "ttf-noto-cjk"
FONT_PACKAGES = "ttf-noto-cjk"

FILES_${PN}  = " ${datadir}/fonts/truetype/ "

do_compile[noexec] = "1"

do_install() {
    install -d ${D}${datadir}/fonts/truetype/
    find ./ -name '*.otf' -exec install -m 0644 {} ${D}${datadir}/fonts/truetype/ \;
}
