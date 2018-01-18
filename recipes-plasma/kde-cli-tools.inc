DESCRIPTION = "KDE Cli Tools"
HOMEPAGE = ""
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
PR = "r0"

DEPENDS = " \
    qtsvg \
    kconfig \
    kiconthemes \
    kinit \
    ki18n \
    kcmutils \
    kio \
    kservice \
    kwindowsystem \
    kactivities \
    kdesu \
    \
    karchive-native \
    kdoctools \
"

SRC_URI = " \
    git://anongit.kde.org/${BPN};nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_plasma

FILES_SOLIBSDEV = ""
