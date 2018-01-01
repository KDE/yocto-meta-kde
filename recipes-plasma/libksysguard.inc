DESCRIPTION = "KSysGuard library"
HOMEPAGE = ""
LICENSE = "LGPLv2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = " \
    qtbase \
    extra-cmake-modules \
    kcoreaddons \
    kconfig \
    ki18n \
    kwindowsystem \
    kcompletion \
    kauth \
    kwidgetsaddons \
    kiconthemes \
    kconfigwidgets \
    kservice \
"

SRC_URI = " \
    git://anongit.kde.org/libksysguard;nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_qt5
inherit gettext
inherit python3native

FILES_${PN} += " \
    ${datadir}/ksysguard/scripts/* \
    ${datadir}/ksysguard/scripts/*/* \
    ${datadir}/dbus-1/system-services/*.service \
    ${datadir}/polkit-1/actions/*.policy \
"

FILES_${PN}-dev += " \
    ${libdir}/cmake/KF5SysGuard/*.cmake \
"
