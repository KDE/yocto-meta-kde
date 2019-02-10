DESCRIPTION = "Plasma Integration"
HOMEPAGE = ""
LICENSE = "LGPLv3"
LIC_FILES_CHKSUM = "file://COPYING.LGPL-3;md5=e6a600fd5e1d9cbde2d983680233ad02"
PR = "r0"

DEPENDS = " \
    qtx11extras \
    qtquickcontrols2 \
    kconfig \
    kconfigwidgets \
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
    git://anongit.kde.org/${BPN};nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_plasma

RDEPENDS_${PN} += "perl \
                   qtquickcontrols \
                  "
