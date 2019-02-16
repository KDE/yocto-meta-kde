DESCRIPTION = "Plasma Mobile Settings"
HOMEPAGE = ""
LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
PR = "r0"

DEPENDS = " \
    plasma-framework \
    kitemmodels \
    kdelibs4support \
"

SRC_URI = " \
    git://anongit.kde.org/${BPN};nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_plasma
inherit kdoctools

FILES_${PN} += " \
    ${libdir}/qml \
    ${datadir}/kpackage \
"
