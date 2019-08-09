DESCRIPTION = "Plasma Workspace"
HOMEPAGE = ""
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=5c213a7de3f013310bd272cdb6eb7a24"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    baloo \
    kcoreaddons \
    kcrash \
    solid \
    kactivities \
    kcmutils \
    kdbusaddons \
    kdeclarative \
    kdelibs4support \
    kdesu \
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
inherit kdoctools

EXTRA_OECMAKE += " -DBUILD_xembed-sni-proxy=OFF"

FILES_SOLIBSDEV = ""
FILES_${PN} += " \
    ${libdir}/qml/org/kde \
    ${datadir}/kstyle/themes/*.themerc \
    ${datadir}/ksmserver/themes \
    ${datadir}/ksplash/Themes \
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
    ${datadir}/kpackage \
"

FILES_${PN}-dev += " \
    ${libdir}/libcolorcorrect.so \
    ${libdir}/libnotificationmanager.so \
    ${libdir}/libtaskmanager.so \
    ${libdir}/libkworkspace5.so \
    ${libdir}/libplasma-geolocation-interface.so \
    ${libdir}/libweather_ion.so \
"

RDEPENDS_${PN} += " \
    kinit \
    milou \
    xprop \
    xset \
    qttools-tools \
"
