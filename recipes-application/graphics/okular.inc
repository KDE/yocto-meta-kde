DESCRIPTION = "Okular"
HOMEPAGE = "https://okular.kde.org/"
LICENSE = "GPL-2.0"
LIC_FILES_CHKSUM = "file://COPYING;md5=5a3169a2d39a757efd8b7aa66a69d97b"
PR = "r0"

DEPENDS += " \
    kirigami \
    kparts \
    threadweaver \
    kwallet \
    kjs \
    kactivities \
    kpty \
    poppler \
    qca \
"

SRC_URI = "git://anongit.kde.org/${BPN};nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kdeapp
inherit kcoreaddons
inherit kconfig
inherit kauth

EXTRA_OECMAKE += " -DOE_QCA_PATH_HOST_ROOT=${STAGING_DIR_HOST}"
