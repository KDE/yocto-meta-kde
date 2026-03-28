# SPDX-FileCopyrightText: 2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "LibreOffice Dictionaries"
DESCRIPTION = "LibreOffice Dictionaries for Hunspell spell checker"
HOMEPAGE = "https://github.com/LibreOffice/dictionaries"
LICENSE = "GPL-2.0-only & GPL-3.0-only"
LIC_FILES_CHKSUM = "file://dictionaries/en/license.txt;md5=686e6cb566fd6382c9fcc7a557bf4544 \
                    file://dictionaries/de/COPYING_GPLv3;md5=d32239bcb673463ab874e80d47fae504 \
"

inherit allarch

SRC_URI = "https://download.documentfoundation.org/libreoffice/src/${PV}/libreoffice-dictionaries-${PV}.2.tar.xz"
SRC_URI[sha256sum] = "03f2616f11de380a28bb9a10cfa957378116a0d1240756e48e3da9e98600abc8"

S = "${UNPACKDIR}/libreoffice-${PV}.2"

do_configure[noexec] = "1"
do_compile[noexec] = "1"

do_install() {
    install -m 0755 -d ${D}${datadir}/hunspell
    install -m 0644  ${S}/dictionaries/*/*.dic ${D}/${datadir}/hunspell
    install -m 0644  ${S}/dictionaries/*/*.aff ${D}/${datadir}/hunspell
}

FILES:${PN} += "${datadir}/hunspell"
