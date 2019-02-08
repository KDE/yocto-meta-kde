DESCRIPTION = "Plasma Camera"
HOMEPAGE = ""
LICENSE = "GPLv3+"
LIC_FILES_CHKSUM = "file://COPYING;md5=1ebbd3e34237af26da5dc08a4e440464"
PR = "r0"

DEPENDS = " \
    kirigami \
"

SRC_URI = " \
    git://anongit.kde.org/${BPN};nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_kdeapp
