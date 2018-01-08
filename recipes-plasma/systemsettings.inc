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
    kdoctools \
    kpackage \
    kdeclarative \
    kactivities \
    kactivitiesstats \
    kirigami \
"

SRC_URI = " \
    git://anongit.kde.org/${BPN};nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_plasma

FILES_${PN} += " \
    ${datadir}/kpackage/genericqml/org.kde.systemsettings.sidebar \
    ${datadir}/kxmlgui5/systemsettings/systemsettingsui.rc \
"

RDEPENDS_${PN} += " \
    qtquickcontrols-qmlplugins \
"
