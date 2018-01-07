DESCRIPTION = "KWin"
HOMEPAGE = ""
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=5c213a7de3f013310bd272cdb6eb7a24"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    extra-cmake-modules \
    kconfigwidgets \
    kcrash \
    kglobalaccel \
    ki18n \
    kinit \
    knotifications \
    kpackage \
    plasma-framework \
    kwindowsystem \
    kiconthemes \
    kidletime \
    kwayland \
    kcompletion \
    kdeclarative \
    kcmutils \
    kio \
    ktextwidgets \
    knewstuff \
    kservice \
    kxmlgui \
    kdecoration \
    kscreenlocker \
    libxcb \
    xcb-util-cursor \
    fontconfig \
    libepoxy \
    libinput \
"

SRC_URI = " \
    git://anongit.kde.org/${BPN};nobranch=1 \
    file://0001-compile-fix.patch \
"
SRC_URI_append_raspberrypi += " \
    file://0002-rpi-compile-fix.patch \
"

S = "${WORKDIR}/git"

inherit cmake_qt5 gettext python3native

do_compile_prepend() {
    # desktoptojson needs to find installed service type files
    export XDG_DATA_DIRS=${STAGING_DATADIR}:$XDG_DATA_DIRS
}

FILES_${PN} += " \
    ${libdir}/libkdeinit5_kwin*.so \
    ${libdir}/kconf_update_bin/kwin5_update_default_rules \
    ${libdir}/plugins/*.so \
    ${libdir}/plugins/kpackage/packagestructure/*.so \
    ${libdir}/plugins/org.kde.kwin.scenes/*.so \
    ${libdir}/plugins/org.kde.kglobalaccel5.platforms/*.so \
    ${libdir}/plugins/kwin/effects/configs/*.so \
    ${libdir}/plugins/org.kde.kwin.waylandbackends/*.so \
    ${libdir}/plugins/org.kde.kdecoration2/*.so \
    ${libdir}/plugins/kf5/org.kde.kidletime.platforms/*.so \
    ${libdir}/plugins/org.kde.kwin.platforms/*.so \
    ${libdir}/plugins/platforms/*.so \
    ${libdir}/qml/org/kde/kwin/decoration/* \
    ${libdir}/qml/org/kde/kwin/decorations/plastik/* \
    ${libdir}/qml/org/kde/kwin/private/kdecoration/* \
    ${datadir}/kservices5/*.desktop \
    ${datadir}/kservices5/kwin/*.desktop \
    ${datadir}/knotifications5/*.notifyrc \
    ${datadir}/kservicetypes5/*.desktop \
    ${datadir}/icons/hicolor/*/*/* \
    ${datadir}/kwincompositing/qml/*.qml \
    ${datadir}/config.kcfg/*.kcfg \
"

FILES_${PN}-dev = " \
    ${libdir}/libkwin*.so \
    ${libdir}/cmake/KWinDBusInterface/*.cmake \
    ${datadir}/dbus-1/interfaces/*.xml \
    ${includedir}/*.h \
"

RDEPENDS_${PN} += " \
    qtvirtualkeyboard-qmlplugins \
    qtwayland-plugins \
    xserver-xorg-xwayland \
"
