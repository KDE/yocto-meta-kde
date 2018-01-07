DESCRIPTION = "Plasma Workspace"
HOMEPAGE = ""
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=5c213a7de3f013310bd272cdb6eb7a24"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    baloo \
    extra-cmake-modules \
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

inherit cmake_qt5 gettext python3native

EXTRA_OECMAKE += " -DBUILD_xembed-sni-proxy=OFF"

do_compile_prepend() {
    # desktoptojson needs to find installed service type files
    export XDG_DATA_DIRS=${STAGING_DATADIR}:$XDG_DATA_DIRS
    # meinproc5 needs to find its libraries
    export LD_LIBRARY_PATH=${STAGING_LIBDIR_NATIVE}:$LD_LIBRARY_PATH
}

FILES_${PN} += " \
    ${libdir}/libkdeinit5_*.so \
    ${libdir}/kconf_update_bin/krunnerplugins \
    ${libdir}/plugins/*.so \
    ${libdir}/plugins/kpackage/packagestructure/*.so \
    ${libdir}/plugins/plasma/applets/*.so \
    ${libdir}/plugins/plasma/dataengine/*.so \
    ${libdir}/plugins/plasma/packagestructure/*.so \
    ${libdir}/plugins/phonon_platform/kde.so \
    ${libdir}/plugins/kf5/kio/*.so \
    ${libdir}/plugins/kf5/kded/*.so \
    ${libdir}/qml/org/kde/taskmanager/* \
    ${libdir}/qml/org/kde/plasma \
    ${datadir}/knotifications5/*.notifyrc \
    ${datadir}/kstyle/themes/*.themerc \
    ${datadir}/kservices5/*.desktop \
    ${datadir}/kservices5/*.protocol \
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
    ${datadir}/dbus-1/services/*.service \
    ${datadir}/sddm/themes \
    ${datadir}/desktop-directories/*.directory \
    ${datadir}/wayland-sessions/*.desktop \
    ${datadir}/kconf_update/*.upd \
    ${datadir}/xsessions/*.desktop \
    ${datadir}/config.kcfg/*.kcfg \
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
    xprop \
    xset \
"
