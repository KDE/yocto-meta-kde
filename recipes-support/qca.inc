DESCRIPTION = "QCA"
HOMEPAGE = ""
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING;md5=fbc093901857fcd118f065f900982c24"
PR = "r0"

DEPENDS = "qtbase"

SRC_URI = "git://invent.kde.org/libraries/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_qt5

do_install_prepend() {
    if [ "0" -ne $(find . -name \*.cmake | grep _usr | wc -l) ]; then
        sed -i 's/\"\/usr\//\"\$\{OE_QCA_PATH_HOST_ROOT\}\/usr\//g' $(find . -name "*.cmake" | grep _usr)
        sed -i 's/\;\/usr\//\;\$\{OE_QCA_PATH_HOST_ROOT\}\/usr\//g' $(find . -name "*.cmake" | grep _usr)
    fi
}

FILES_${PN} += " \
    ${libdir}/qca-qt5/crypto/libqca-*.so \
"

FILES_${PN}-dev += " \
    ${prefix}/mkspecs/features/*  \
    ${libdir}/cmake/Qca-qt5/*.cmake \
"
