DESCRIPTION = "KWayland Integration"
HOMEPAGE = ""
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = " \
    qtbase \
    extra-cmake-modules \
    kidletime \
    kwindowsystem \
    kwayland \
"

SRC_URI = " \
    git://git.kde.org/${BPN};nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_qt5

FILES_${PN} += " \
    ${libdir}/plugins/kf5/org.kde.kwindowsystem.platforms/*.so \
    ${libdir}/plugins/kf5/org.kde.kidletime.platforms/*.so \
"
