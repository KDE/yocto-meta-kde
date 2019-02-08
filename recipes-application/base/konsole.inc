DESCRIPTION = "Konsole"
HOMEPAGE = "https://konsole.kde.org/"
LICENSE = "GPL-2.0"
LIC_FILES_CHKSUM = "file://COPYING;md5=5c213a7de3f013310bd272cdb6eb7a24"
PR = "r0"

DEPENDS += " \
    kinit \
    kio \
    knewstuff \
    knotifications \
    knotifyconfig \
    kparts \
    kpty \
    kxmlgui \
"

SRC_URI = "git://anongit.kde.org/${BPN};nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kdeapp

FILES_SOLIBSDEV = ""
