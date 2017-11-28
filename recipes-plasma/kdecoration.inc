DESCRIPTION = "Plugin based library to create window decorations"
HOMEPAGE = ""
LICENSE = "LGPLv2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = " \
    qtbase \
    extra-cmake-modules \
"

SRC_URI = " \
    git://anongit.kde.org/${PN};nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_qt5

FILES_${PN}-dev += " \
    ${libdir}/cmake/KDecoration2/*.cmake \
"
