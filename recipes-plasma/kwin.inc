DESCRIPTION = "KWin"
HOMEPAGE = ""
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=5c213a7de3f013310bd272cdb6eb7a24"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    qtsensors \
    qtscript \
    kconfigwidgets \
    kcrash \
    kglobalaccel \
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
    file://kwinrc \
"

S = "${WORKDIR}/git"

inherit cmake_plasma kdoctools

do_install_append() {
    # dirty workaround for aurora crash on Wayland
    rm -rf ${D}/${libdir}/plugins/org.kde.kdecoration2/

    install -m 644 ${WORKDIR}/kwinrc ${D}/${sysconfdir}/xdg/kwinrc
}

FILES_SOLIBSDEV = ""
FILES_${PN} += " \
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
    ${datadir}/kwincompositing/qml/*.qml \
    ${datadir}/config.kcfg/*.kcfg \
    ${datadir}/kpackage \
"

FILES_${PN}-dev += " \
    ${libdir}/libkwin*.so \
"

RDEPENDS_${PN} += " \
    qtvirtualkeyboard-plugins \
    qtvirtualkeyboard-qmlplugins \
    qtwayland-plugins \
    xserver-xorg-xwayland \
"
