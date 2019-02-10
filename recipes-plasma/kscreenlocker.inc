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
    file://kde.pam \
"
S = "${WORKDIR}/git"


inherit cmake_plasma

do_install_append() {
    mkdir -p ${D}${sysconfdir}/pam.d
    cp ${WORKDIR}/kde.pam ${D}${sysconfdir}/pam.d/kde
}

FILES_${PN} += " \
  ${datadir}/ksmserver/screenlocker/org.kde.passworddialog/*.desktop \
"

RDEPENDS_${PN} += "perl"
