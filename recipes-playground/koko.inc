DESCRIPTION = "KoKo Gallery Application"
HOMEPAGE = ""
LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
PR = "r0"

DEPENDS = " \
    qtlocation \
    kdeclarative \
    kiconthemes \
    kio \
    kirigami \
    knotifications \
    exiv2 \
"

SRC_URI = " \
    git://anongit.kde.org/${BPN};nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_kdeapp
