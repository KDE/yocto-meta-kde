DESCRIPTION = "Plasma Integration"
HOMEPAGE = ""
LICENSE = "LGPLv3"
LIC_FILES_CHKSUM = "file://COPYING.LGPL-3;md5=e6a600fd5e1d9cbde2d983680233ad02"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtx11extras \
    qtquickcontrols2 \
    extra-cmake-modules \
    kconfig \
    kconfigwidgets \
    ki18n \
    kiconthemes \
    kio \
    knotifications \
    kwayland \
    kwidgetsaddons \
    kwindowsystem \
    breeze \
    libxcursor \
"

SRC_URI = " \
    git://anongit.kde.org/plasma-integration;nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_qt5
inherit gettext
inherit python3native

FILES_${PN} += " \
    ${libdir}/plugins/platformthemes/KDEPlasmaPlatformTheme.so \
    ${datadir}/kconf_update/* \
"
