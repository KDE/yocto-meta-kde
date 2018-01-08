DESCRIPTION = "KScreenLocker"
HOMEPAGE = ""
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
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
    git://git.kde.org/${BPN};nobranch=1 \
"
S = "${WORKDIR}/git"


inherit cmake_plasma

FILES_${PN} += " \
  ${datadir}/ksmserver/screenlocker/org.kde.passworddialog/*.desktop \
"

RDEPENDS_${PN} += "perl"
