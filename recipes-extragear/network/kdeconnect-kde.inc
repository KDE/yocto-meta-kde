DESCRIPTION = "KDE Connect"
HOMEPAGE = "https://community.kde.org/KDEConnect"
LICENSE = "GPL-2"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
PR = "r0"

DEPENDS += " \
    qtdeclarative \
    qca \
    ki18n \
    kconfigwidgets \
    kdbusaddons \
    kiconthemes \
    knotifications \
    kio \
    kcmutils \
    kirigami \
    kpeople \
    kwayland \
"

SRC_URI = "git://anongit.kde.org/${BPN};protocol=git"
S = "${WORKDIR}/git"

inherit cmake_kdeapp

EXTRA_OECMAKE += " -DEXPERIMENTALAPP_ENABLED=ON -DSMSAPP_ENABLED=ON -DOE_QCA_PATH_HOST_ROOT=${STAGING_DIR_HOST}"

FILES_${PN} += " \
    ${datadir}/plasma \
    ${datadir}/nautilus-python \
"
