DESCRIPTION = "KSysGuard library"
HOMEPAGE = ""
LICENSE = "LGPLv2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = " \
    kcoreaddons \
    kconfig \
    kwindowsystem \
    kcompletion \
    kauth \
    kwidgetsaddons \
    kiconthemes \
    kconfigwidgets \
    kservice \
    plasma-framework \
"

SRC_URI = " \
    git://anongit.kde.org/${BPN};nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_plasma

FILES_${PN} += " \
    ${datadir}/ksysguard/scripts/* \
    ${datadir}/ksysguard/scripts/*/* \
"
