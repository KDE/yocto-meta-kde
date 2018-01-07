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
    kdoctools \
"

SRC_URI = " \
    git://git.kde.org/${BPN};nobranch=1 \
    file://0001-explicit-doctools-dependency.patch \
"
S = "${WORKDIR}/git"

inherit cmake_plasma

do_compile_prepend() {
    # desktoptojson needs to find installed service type files
    export XDG_DATA_DIRS=${STAGING_DATADIR}:$XDG_DATA_DIRS
    # meinproc5 needs to find its libraries
    export LD_LIBRARY_PATH=${STAGING_LIBDIR_NATIVE}:$LD_LIBRARY_PATH
}
