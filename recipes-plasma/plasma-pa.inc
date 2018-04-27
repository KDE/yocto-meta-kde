DESCRIPTION = "Plasma PA"
HOMEPAGE = ""
LICENSE = "GPL-2"
LIC_FILES_CHKSUM = "file://COPYING;md5=5c213a7de3f013310bd272cdb6eb7a24"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    kcoreaddons \
    kdeclarative \
    kglobalaccel \
    ki18n \
    plasma-framework \
    pulseaudio \
    libcanberra \
    \
    kdoctools \
    kdoctools-native \
    karchive-native \
"

SRC_URI = " \
    git://anongit.kde.org/${BPN};nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_plasma

FILES_${PN} += " \
    ${libdir}/qml/org/kde/plasma/private/volume/* \
    ${datadir}/kpackage/kcms/kcm_pulseaudio \
    ${datadir}/plasma/plasmoids/org.kde.plasma.volume \
    ${datadir}/kde4/apps/kconf_update/* \
"

RDEPENDS_${PN} += "perl"
