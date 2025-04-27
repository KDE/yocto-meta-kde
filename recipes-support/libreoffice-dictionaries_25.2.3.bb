# SPDX-FileCopyrightText: 2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "LibreOffice Dictionaries"
LICENSE = "GPL-2.0-only & GPL-3.0-only"
LIC_FILES_CHKSUM = " \
    file://dictionaries/en/license.txt;md5=686e6cb566fd6382c9fcc7a557bf4544 \
    file://dictionaries/de/COPYING_GPLv3;md5=d32239bcb673463ab874e80d47fae504 \
"

SRC_URI = "https://download.documentfoundation.org/libreoffice/src/${PV}/libreoffice-dictionaries-${PV}.1.tar.xz"
SRC_URI[sha256sum] = "bf7bb02bb5ccce2de73bfc96b2df2edc0e493d7632911027267ad9ffa85e4103"

S = "${WORKDIR}/libreoffice-${PV}.1"

do_configure[noexec] = "1"
do_compile[noexec] = "1"
do_install() {
    install -m 0755 -d ${D}${datadir}/hunspell
    cp ${S}/dictionaries/*/*.dic ${D}/${datadir}/hunspell
    cp ${S}/dictionaries/*/*.aff ${D}/${datadir}/hunspell
}

FILES:${PN} = " \
    ${datadir}/hunspell \
"
