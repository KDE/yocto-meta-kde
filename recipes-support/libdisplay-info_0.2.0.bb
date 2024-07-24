SUMMARY = "EDID and DisplayID library."
HOMEPAGE = "https://gitlab.freedesktop.org/emersion/libdisplay-info"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=e4426409957080ee0352128354cea2de"

SRC_URI = "git://gitlab.freedesktop.org/emersion/libdisplay-info.git;branch=main;protocol=https"

DEPENDS = "hwdata-native"

S = "${WORKDIR}/git"
SRCREV = "66b802d05b374cd8f388dc6ad1e7ae4f08cb3300"

inherit meson pkgconfig
