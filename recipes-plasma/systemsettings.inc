DESCRIPTION = "System Settings"
HOMEPAGE = ""
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=5c213a7de3f013310bd272cdb6eb7a24"
PR = "r0"

DEPENDS += " \
    kitemviews \
    kcmutils \
    ki18n \
    kio \
    kservice \
    kiconthemes \
    kwidgetsaddons \
    kwindowsystem \
    kxmlgui \
    kdbusaddons \
    kconfig \
    kpackage \
    kdeclarative \
    kactivities \
    kactivitiesstats \
    kirigami \
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
    ${datadir}/kpackage/genericqml/org.kde.systemsettings.sidebar \
"

RDEPENDS_${PN} += " \
    qtquickcontrols-qmlplugins \
"
