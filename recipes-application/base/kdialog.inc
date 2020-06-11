DESCRIPTION = "KDialog"
LICENSE = "GPL-2.0"
LIC_FILES_CHKSUM = "file://COPYING;md5=5c213a7de3f013310bd272cdb6eb7a24"
PR = "r0"

DEPENDS += " \
    ktextwidgets \
    kio \
    knotifications \
    kguiaddons \
    kiconthemes \
    kwindowsystem \
    kdbusaddons\
"

SRC_URI = "git://invent.kde.org/utilities/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kdeapp
inherit kcoreaddons
inherit kconfig
inherit kauth
