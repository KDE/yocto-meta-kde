DESCRIPTION = "Discover"
HOMEPAGE = ""
LICENSE = "GPL-3"
LIC_FILES_CHKSUM = "file://COPYING;md5=6679dc9ea294d0d265902ab8c9936a9c"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    kcoreaddons \
    kconfig \
    kcrash \
    kdbusaddons \
    karchive \
    kdeclarative \
    kxmlgui \
    kitemmodels \
    kio \
    kirigami \
    attica \
    knewstuff \
    knotifications \
"

SRC_URI = " \
    git://anongit.kde.org/${BPN};nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_plasma

FILES_${PN} += " \
    ${libdir}/qml/org/kde/discovernotifier \
    ${libdir}/plasma-discover \
"
