DESCRIPTION = "Milou"
HOMEPAGE = ""
LICENSE = "GPL-2"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    kcoreaddons \
    kdeclarative \
    kservice \
    plasma-framework \
    krunner \
"

SRC_URI = " \
    git://git.kde.org/${BPN};nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_plasma

FILES_${PN} += " \
  ${libdir}/qml/org/kde/milou/* \
  ${datadir}/plasma/plasmoids/org.kde.milou \
"
