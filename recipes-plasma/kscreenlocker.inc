DESCRIPTION = "KScreenLocker"
HOMEPAGE = ""
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    extra-cmake-modules \
    kwayland \
    kcrash \
    kdeclarative \
    kglobalaccel \
    ki18n \
    kidletime \
    kcmutils \
    knotifications \
    solid \
    ktextwidgets \
    kwindowsystem \
    kxmlgui \
    libxcb \
    libpam \
    wayland-native \
"

SRC_URI = " \
    git://git.kde.org/${PN};nobranch=1 \
"
S = "${WORKDIR}/git"


inherit cmake_qt5 gettext python3native

do_compile_prepend() {
    # desktoptojson needs to find installed service type files
    export XDG_DATA_DIRS=${STAGING_DATADIR}:$XDG_DATA_DIRS
}

FILES_${PN} += " \
  ${datadir}/kconf_update/* \
  ${datadir}/knotifications5/*.notifyrc \
  ${datadir}/kservices5/*.desktop \
  ${datadir}/ksmserver/screenlocker/org.kde.passworddialog/*.desktop \
  ${libdir}/plugins/*.so \
"

FILES_${PN}-dev += " \
    ${datadir}/dbus-1/interfaces/*.xml \
    ${libdir}/cmake/KScreenLocker/*.cmake \
    ${libdir}/cmake/ScreenSaverDBusInterface/*.cmake \
"
