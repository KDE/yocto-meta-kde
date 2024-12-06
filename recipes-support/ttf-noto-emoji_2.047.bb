# SPDX-FileCopyrightText: 2024 Marc Ferland <marc.ferland@sonatest.com>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Google Noto Emoji fonts"
SECTION = "fonts"
HOMEPAGE = "https://fonts.google.com/noto"
LICENSE = "OFL-1.1"
LIC_FILES_CHKSUM = "file://LICENSE;md5=cdc5040ed1e8cf5d3516f5285fd7b636"

inherit allarch fontcache

INHIBIT_DEFAULT_DEPS = "1"

SRC_URI = "git://github.com/googlefonts/noto-emoji.git;protocol=https;branch=main"
SRCREV = "22e564626297b4df0a40570ad81d6c05cc7c38bd"
S = "${WORKDIR}/git"

FILES:${PN} = "${datadir}/fonts/truetype"

do_configure[noexec] = "1"
do_compile[noexec] = "1"

do_install() {
    install -d ${D}${datadir}/fonts/truetype/
    install -m 0644 ${S}/fonts/NotoColorEmoji.ttf ${D}${datadir}/fonts/truetype
}
