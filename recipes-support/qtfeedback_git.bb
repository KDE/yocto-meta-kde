inherit qmake5
inherit pkgconfig

DEPENDS += "qtbase qtdeclarative"

LICENSE = "GFDL-1.3 & BSD-3-Clause & ( GPL-3.0-only & The-Qt-Company-GPL-Exception-1.0 | The-Qt-Company-Commercial ) & ( GPL-2.0-or-later | LGPL-3.0-only | The-Qt-Company-Commercial )"
LIC_FILES_CHKSUM = " \
    file://LICENSE.LGPL3;md5=e6a600fd5e1d9cbde2d983680233ad02 \
    file://LICENSE.GPL2;md5=b234ee4d69f5fce4486a80fdaf4a4263 \
    file://LICENSE.GPL3;md5=d32239bcb673463ab874e80d47fae504 \
    file://LICENSE.GPL3-EXCEPT;md5=763d8c535a234d9a3fb682c7ecb6c073 \
    file://LICENSE.FDL;md5=6d9f2a9af4c8b8c3c769f6cc1b6aaf7e \
"

# most recent change from Sep 3, 2018
QT_MODULE_BRANCH = "master"
SRC_URI = " \
    git://code.qt.io/cgit/qt/qtfeedback.git;name=qtfeedback;branch=master;protocol=https \
"

CVE_PRODUCT = "qt"

S = "${WORKDIR}/git"

PV = "5.0.0+git${SRCPV}"

SRCREV = "a14bd0bb1373cde86e09e3619fb9dc70f34c71f2"

PACKAGES =. "${PN}-qmlplugins ${PN}-mkspecs "

RRECOMMENDS:${PN} = " \
    ${PN}-qmlplugins \
    "

# qmlplugins 1-4 levels of subdirs qmldir + *{.so,*.qmltypes,*.qml,*.qmlc,*.js,*.jsc}
FILES:${PN}-qmlplugins = " \
    ${OE_QMAKE_PATH_QML}/*.qmltypes \
    ${OE_QMAKE_PATH_QML}/*/*${SOLIBSDEV} \
    ${OE_QMAKE_PATH_QML}/*/qmldir \
    ${OE_QMAKE_PATH_QML}/*/*.qmltypes \
    ${OE_QMAKE_PATH_QML}/*/*.qml \
    ${OE_QMAKE_PATH_QML}/*/*.qmlc \
    ${OE_QMAKE_PATH_QML}/*/*.js \
    ${OE_QMAKE_PATH_QML}/*/*.jsc \
    ${OE_QMAKE_PATH_QML}/*/*.png \
    ${OE_QMAKE_PATH_QML}/*/*/*${SOLIBSDEV} \
    ${OE_QMAKE_PATH_QML}/*/*/qmldir \
    ${OE_QMAKE_PATH_QML}/*/*/*.qmltypes \
    ${OE_QMAKE_PATH_QML}/*/*/*.qml \
    ${OE_QMAKE_PATH_QML}/*/*/*.qmlc \
    ${OE_QMAKE_PATH_QML}/*/*/*.js \
    ${OE_QMAKE_PATH_QML}/*/*/*.jsc \
    ${OE_QMAKE_PATH_QML}/*/*/*.png \
    ${OE_QMAKE_PATH_QML}/*/*/*/*${SOLIBSDEV} \
    ${OE_QMAKE_PATH_QML}/*/*/*/qmldir \
    ${OE_QMAKE_PATH_QML}/*/*/*/images \
    ${OE_QMAKE_PATH_QML}/*/*/*/*.qmltypes \
    ${OE_QMAKE_PATH_QML}/*/*/*/*.qml \
    ${OE_QMAKE_PATH_QML}/*/*/*/*.qmlc \
    ${OE_QMAKE_PATH_QML}/*/*/*/*.js \
    ${OE_QMAKE_PATH_QML}/*/*/*/*.jsc \
    ${OE_QMAKE_PATH_QML}/*/*/*/*.png \
    ${OE_QMAKE_PATH_QML}/*/*/*/*.metainfo \
    ${OE_QMAKE_PATH_QML}/*/*/*/*/*${SOLIBSDEV} \
    ${OE_QMAKE_PATH_QML}/*/*/*/*/qmldir \
    ${OE_QMAKE_PATH_QML}/*/*/*/*/*.qmltypes \
    ${OE_QMAKE_PATH_QML}/*/*/*/*/*.qml \
    ${OE_QMAKE_PATH_QML}/*/*/*/*/*.qmlc \
    ${OE_QMAKE_PATH_QML}/*/*/*/*/*.js \
    ${OE_QMAKE_PATH_QML}/*/*/*/*/*.jsc \
    ${OE_QMAKE_PATH_QML}/*/*/*/*/*/*.png \
"

FILES:${PN}-mkspecs = "\
    ${OE_QMAKE_PATH_ARCHDATA}/mkspecs \
"

FILES:${PN}-dev += " \
    ${OE_QMAKE_PATH_LIBS}/lib*${SOLIBSDEV} \
    ${OE_QMAKE_PATH_LIBS}/pkgconfig \
    ${OE_QMAKE_PATH_LIBS}/cmake/* \
    ${OE_QMAKE_PATH_LIBS}/*.prl \
    ${OE_QMAKE_PATH_LIBS}/*.la \
    ${OE_QMAKE_PATH_HEADERS}/* \
"
