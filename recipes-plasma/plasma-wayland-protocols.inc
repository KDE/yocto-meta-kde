DESCRIPTION = "Plasma KWayland Protocols"
HOMEPAGE = ""
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

SRC_URI = " \
    git://invent.kde.org/libraries/${BPN};nobranch=1;protocol=https \
    file://0001-relocatable-installation.patch \
"

S = "${WORKDIR}/git"

inherit cmake_plasma

FILES_${PN}-dev += " \
    ${datadir}/plasma-wayland-protocols \
"
