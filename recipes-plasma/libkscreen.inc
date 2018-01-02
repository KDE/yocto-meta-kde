DESCRIPTION = "KScreen library"
HOMEPAGE = ""
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtx11extras \
    extra-cmake-modules \
    kwayland \
"

SRC_URI = " \
    git://anongit.kde.org/libkscreen;nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_qt5
inherit gettext
inherit python3native

FILES_${PN} += " \
    ${libdir}/plugins/kf5/kscreen/*.so \
    ${datadir}/dbus-1/services/*.service \
"

FILES_${PN}-dev += " \
    ${libdir}/cmake/KF5Screen/*.cmake \
    ${prefix}/mkspecs/modules/qt_*.pri \
"
