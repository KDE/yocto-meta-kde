DESCRIPTION = "Powerdevil"
HOMEPAGE = ""
LICENSE = "GPL-2"
LIC_FILES_CHKSUM = "file://COPYING;md5=5c213a7de3f013310bd272cdb6eb7a24"
PR = "r0"

DEPENDS = " \
    qtx11extras \
    kactivities \
    kidletime \
    kconfig \
    kdbusaddons \
    solid \
    kglobalaccel \
    kio \
    knotifyconfig \
    libkscreen \
    kdelibs4support \
    kwayland \
    kitemmodels \
    plasma-workspace \
    bluez-qt \
"

SRC_URI = "git://invent.kde.org/plasma/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_plasma
inherit kdoctools
