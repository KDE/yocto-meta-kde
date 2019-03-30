DESCRIPTION = "LibreOffice Dictionaries"
LICENSE = "GPL-2.0 & GPL-3.0"
LIC_FILES_CHKSUM = " \
    file://en/license.txt;md5=686e6cb566fd6382c9fcc7a557bf4544 \
    file://de/COPYING_GPLv3;md5=d32239bcb673463ab874e80d47fae504 \
"

SRCREV = "libreoffice-6-2-3"
SRC_URI = " \
    git://anongit.freedesktop.org/libreoffice/dictionaries;nobranch=1 \
"
S = "${WORKDIR}/git"

do_compile[noexec] = "1"
do_install() {
    install -m 0755 -d ${D}${datadir}/hunspell
    cp ${S}/*/*.dic ${D}/${datadir}/hunspell
    cp ${S}/*/*.aff ${D}/${datadir}/hunspell
}

FILES_${PN} = " \
    ${datadir}/hunspell \
"
