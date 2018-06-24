DESCRIPTION = "Powerdevil"
HOMEPAGE = ""
LICENSE = "GPL-2"
LIC_FILES_CHKSUM = "file://COPYING;md5=5c213a7de3f013310bd272cdb6eb7a24"
PR = "r0"

DEPENDS = " \
    qtx11extras \
    kactivities \
    kauth \
    kidletime \
    kconfig \
    kdbusaddons \
    solid \
    ki18n \
    kglobalaccel \
    kio \
    knotifyconfig \
    libkscreen \
    kdelibs4support \
    kwayland \
    kitemmodels \
    plasma-workspace \
    bluez-qt \
    \
    kdoctools \
    kdoctools-native \
    karchive-native \
"

SRC_URI = " \
    git://git.kde.org/${BPN};nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_plasma
