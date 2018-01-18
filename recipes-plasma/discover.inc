DESCRIPTION = "Discover"
HOMEPAGE = ""
LICENSE = "GPL-3"
LIC_FILES_CHKSUM = "file://COPYING;md5=f27defe1e96c2e1ecd4e0c9be8967949"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    kcoreaddons \
    kconfig \
    kcrash \
    kdbusaddons \
    ki18n \
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
