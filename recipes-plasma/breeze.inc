DESCRIPTION = "Breeze Style"
HOMEPAGE = ""
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=5c213a7de3f013310bd272cdb6eb7a24"
PR = "r0"

DEPENDS = " \
    qtbase \
    extra-cmake-modules \
    kcmutils \
    kconfigwidgets \
    kcoreaddons \
    kdecoration \
    kguiaddons \
    ki18n \
    kpackage \
    kwayland \
    kwindowsystem \
"

SRC_URI = " \
    git://anongit.kde.org/breeze;nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_qt5
inherit gettext
inherit python3native

FILES_${PN} += " \
    ${libdir}/kconf_update_bin/* \
    ${libdir}/plugins/*.so \
    ${libdir}/plugins/*/*.so \
    ${libdir}/qml/QtQuick/Controls/Styles \
    ${datadir}/kstyle/themes \
    ${datadir}/kservices5/*.desktop \
    ${datadir}/plasma/look-and-feel \
    ${datadir}/color-schemes \
    ${datadir}/icons \
    ${datadir}/kconf_update/*.upd \
    ${datadir}/QtCurve/*.qtcurve \
    ${datadir}/wallpapers \
"

FILES_${PN}-dev += " \
    ${libdir}/cmake/Breeze/*.cmake \
"
