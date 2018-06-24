DESCRIPTION = "Plasma Phone Components"
HOMEPAGE = "https://community.kde.org/Plasma/Mobile/Code"
LICENSE = "GPLv2+"
# TODO: repo does not have a license file!
LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
PR = "r0"

DEPENDS = " \
    telepathy-qt \
    kwayland \
    plasma-framework \
    kpeople \
"

SRC_URI = " \
    git://anongit.kde.org/${BPN};nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_plasma

FILES_${PN} += " \
    ${libdir}/qml/QtQuick/VirtualKeyboard/Styles/Plasma/* \
    ${libdir}/qml/org/kde/plasma/private/mobileshell/* \
    ${libdir}/qml/org/kde/plasma/private/kpeoplehelper/* \
    ${datadir}/kpackage/genericqml/org.kde.phone.dialer/* \
    ${datadir}/plasma/shells/org.kde.plasma.phone/* \
    ${datadir}/plasma/plasmoids/* \
    ${datadir}/plasma/look-and-feel/org.kde.plasma.phone/* \
    ${datadir}/telepathy/clients/Plasma.Dialer.client \
    ${datadir}/kwin/scripts/org.kde.phone.multitasking/* \
    ${datadir}/wallpapers/org.kde.plasma.phone.lockers/* \
    ${datadir}/wayland-sessions/*.desktop \
"

RDEPENDS_${PN} += " \
    libqofono \
"
