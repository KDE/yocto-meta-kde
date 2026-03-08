# SPDX-FileCopyrightText: 2019 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Google Noto CJK fonts"
DESCRIPTION = "Collection of high-quality fonts with multiple weights and widths in sans, serif, mono, and other styles"
HOMEPAGE = "https://www.google.com/get/noto/"
SECTION = "fonts"
LICENSE = "OFL-1.1"
LIC_FILES_CHKSUM = "file://LICENSE;md5=55719faa0112708e946b820b24b14097"

inherit allarch fontcache

INHIBIT_DEFAULT_DEPS = "1"

SRC_URI = "https://github.com/googlefonts/noto-cjk/releases/download/Serif${PV}/04_NotoSerifCJKOTC.zip"
SRC_URI[sha256sum] = "c76ed8fd491ce98182ec6430238b90a1eabea8857c7db64e9037efa38e198a31"
S = "${UNPACKDIR}"

PACKAGES = "ttf-noto-cjk"
FONT_PACKAGES = "ttf-noto-cjk"

FILES:${PN} += "${datadir}/fonts/truetype/"

do_compile[noexec] = "1"

do_install() {
    install -d ${D}${datadir}/fonts/truetype/
    find ${S} -name '*.ttc' -exec install -m 0644 {} ${D}${datadir}/fonts/truetype/ \;
}
