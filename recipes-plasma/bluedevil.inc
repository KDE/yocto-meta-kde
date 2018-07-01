DESCRIPTION = "Bluedevil"
HOMEPAGE = ""
LICENSE = "GPL-2"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    kcoreaddons \
    kwidgetsaddons \
    kdbusaddons \
    knotifications \
    kwindowsystem \
    kiconthemes \
    plasma-framework \
    ki18n \
    kio \
    bluez-qt \
    kded \
    shared-mime-info \
    shared-mime-info-native \
"

SRC_URI = " \
    git://git.kde.org/${BPN};nobranch=1 \
    file://0001-license-files.diff \
"
S = "${WORKDIR}/git"

inherit cmake_plasma

FILES_${PN} += " \
    ${libdir}/qml \
    ${datadir}/plasma \
    ${datadir}/mime/packages \
    ${datadir}/bluedevilwizard \
    ${datadir}/remoteview \
"
