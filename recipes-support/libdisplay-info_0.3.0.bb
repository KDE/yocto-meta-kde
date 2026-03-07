SUMMARY = "libdisplay-info"
DESCRIPTION = "EDID and DisplayID library"
HOMEPAGE = "https://gitlab.freedesktop.org/emersion/libdisplay-info"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=e4426409957080ee0352128354cea2de"

DEPENDS += "hwdata-native"

SRC_URI = "git://gitlab.freedesktop.org/emersion/libdisplay-info.git;branch=main;protocol=https"
SRCREV = "47a5590e9c4eb35d67651b8c05a55f1a48259329"
S = "${UNPACKDIR}/git"

inherit meson pkgconfig
