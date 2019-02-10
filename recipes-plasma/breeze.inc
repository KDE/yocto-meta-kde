DESCRIPTION = "Breeze Style"
HOMEPAGE = ""
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=5c213a7de3f013310bd272cdb6eb7a24"
PR = "r0"

DEPENDS = " \
    fftw \
    kcmutils \
    kconfigwidgets \
    kcoreaddons \
    kdecoration \
    kguiaddons \
    kpackage \
    kwayland \
    kwindowsystem \
"

SRC_URI = " \
    git://anongit.kde.org/${BPN};nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_plasma

FILES_${PN} += " \
    ${libdir}/qml/QtQuick/Controls/Styles \
    ${datadir}/kstyle/themes \
    ${datadir}/plasma/look-and-feel \
    ${datadir}/color-schemes \
    ${datadir}/icons \
    ${datadir}/QtCurve/*.qtcurve \
    ${datadir}/wallpapers \
"

RDEPENDS_${PN} += " \
    breeze-icons \
"
