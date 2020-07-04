DESCRIPTION = "XDG Desktop Portal KDE"
HOMEPAGE = ""
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING;md5=4fbd65380cdd255951079008b364516c"
PR = "r0"

DEPENDS += " \
    kcoreaddons \
    knotifications \
    kwayland \
    kwidgetsaddons \
    kirigami \
    kio \
    kdeclarative \
    plasma-framework \
    pipewire \
"

SRC_URI = "git://invent.kde.org/plasma/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_plasma

FILES_${PN} += " \
    ${datadir}/xdg-desktop-portal \
"
