DESCRIPTION = "KCalCore"
HOMEPAGE = "https://api.kde.org/kdepim/kcalcore/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING;md5=d31701979430eba03ad0eac6e517dec3"
PR = "r0"

DEPENDS = " \
    qtbase \
    libical \
"

SRC_URI = "git://anongit.kde.org/${BPN};nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5
