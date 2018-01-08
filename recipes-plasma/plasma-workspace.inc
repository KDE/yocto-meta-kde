DESCRIPTION = "Plasma Workspace"
HOMEPAGE = ""
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=5c213a7de3f013310bd272cdb6eb7a24"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    baloo \
    karchive-native \
    kcoreaddons \
    kcrash \
    solid \
    kactivities \
    kcmutils \
    kdbusaddons \
    kdeclarative \
    kdelibs4support \
    kdesu \
    kdoctools \
    kidletime \
    kitemmodels \
    kjsembed \
    knewstuff \
    knotifications \
    knotifyconfig \
    kpackage \
    krunner \
    kscreenlocker \
    ktexteditor \
    kwallet \
    kwayland \
    kwin \
    libksysguard \
    networkmanager-qt \
    phonon \
    plasma-framework \
    prison \
"

SRC_URI = " \
    git://anongit.kde.org/${BPN};nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_plasma

EXTRA_OECMAKE += " -DBUILD_xembed-sni-proxy=OFF"

FILES_${PN} += " \
    ${libdir}/libkdeinit5_*.so \
    ${libdir}/qml/org/kde/taskmanager/* \
    ${libdir}/qml/org/kde/plasma \
    ${datadir}/kstyle/themes/*.themerc \
    ${datadir}/ksmserver/themes \
    ${datadir}/ksplash/Themes \
    ${datadir}/kservicetypes5/*.desktop \
    ${datadir}/kio_desktop \
    ${datadir}/plasma/plasmoids \
    ${datadir}/plasma/look-and-feel \
    ${datadir}/plasma/shareprovider \
    ${datadir}/plasma/wallpapers \
    ${datadir}/plasma/services/*.operations \
    ${datadir}/solid/actions/*.desktop \
    ${datadir}/sddm/themes \
    ${datadir}/desktop-directories/*.directory \
    ${datadir}/wayland-sessions/*.desktop \
    ${datadir}/xsessions/*.desktop \
"

FILES_${PN}-dev = " \
    ${includedir} \
    ${libdir}/libtaskmanager.so \
    ${libdir}/libkworkspace5.so \
    ${libdir}/libplasma-geolocation-interface.so \
    ${libdir}/libweather_ion.so \
    ${libdir}/cmake/*/*.cmake \
    ${datadir}/kdevappwizard/templates/* \
    ${datadir}/dbus-1/interfaces/*.xml \
"

RDEPENDS_${PN} += " \
    kinit \
    milou \
    xprop \
    xset \
"
