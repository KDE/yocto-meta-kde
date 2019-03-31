DESCRIPTION = "Calindori"
HOMEPAGE = ""
LICENSE = "GPLv3"
LIC_FILES_CHKSUM = "file://LICENSE;md5=d32239bcb673463ab874e80d47fae504"
PR = "r0"

DEPENDS = " \
    kconfig \
    kcalcore \
    kirigami \
    plasma-framework \
"

SRC_URI = " \
    git://git@invent.kde.org/dkardarakos/${BPN}.git;nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_kdeapp
inherit kconfig
