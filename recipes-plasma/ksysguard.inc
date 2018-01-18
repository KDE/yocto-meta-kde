DESCRIPTION = "KSysguard"
HOMEPAGE = ""
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=5c213a7de3f013310bd272cdb6eb7a24"
PR = "r0"

DEPENDS = " \
    kconfig \
    kcoreaddons \
    kdbusaddons \
    ki18n \
    kiconthemes \
    kinit \
    kitemviews \
    kio \
    knewstuff \
    knotifications \
    kwindowsystem \
    libksysguard \
    \
    kdoctools \
    karchive-native \
"

SRC_URI = " \
    git://git.kde.org/${BPN};nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_plasma

FILES_SOLIBSDEV = ""
