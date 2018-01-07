DESCRIPTION = "KActivity Manager Daemon"
HOMEPAGE = ""
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING.GPL2;md5=b234ee4d69f5fce4486a80fdaf4a4263"
PR = "r0"

DEPENDS = " \
    boost \
    \
    kconfig \
    kcoreaddons \
    kdbusaddons \
    kglobalaccel \
    ki18n \
    kio \
    kwindowsystem \
    kxmlgui \
"

SRC_URI = " \
    git://anongit.kde.org/${BPN};nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_plasma

CXXFLAGS += "-DBOOST_DISABLE_ASSERTS"

# the cmake checks for those use try_run(), which fails when cross-compiling
EXTRA_OECMAKE += " \
    -DHAVE_CXX11_AUTO=ON \
    -DHAVE_CXX11_NULLPTR=ON \
    -DHAVE_CXX11_LAMBDA=ON \
    -DHAVE_CXX11_OVERRIDE=ON \
    -DHAVE_CXX11_UNIQUE_PTR=ON \
    -DHAVE_CXX11_VARIADIC_TEMPLATES=ON \
    -DHAVE_CXX11_INITIALIZER_LISTS=ON \
"

FILES_${PN} += " \
    ${libdir}/*.so \
"

FILES_${PN}-dev = ""
