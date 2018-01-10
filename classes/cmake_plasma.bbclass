inherit cmake_qt5
inherit gettext
inherit python3native

EXTRA_OECMAKE += " \
    -DBUILD_TESTING=OFF \
"

DEPENDS += " \
    extra-cmake-modules \
    qtbase \
"

do_configure_prepend() {
    # kpackagetool5 needs to find installed service type files
    export XDG_DATA_DIRS=${STAGING_DATADIR}:$XDG_DATA_DIRS
}

do_compile_prepend() {
    # desktoptojson needs to find installed service type files
    export XDG_DATA_DIRS=${STAGING_DATADIR}:$XDG_DATA_DIRS
    # meinproc5 needs to find its libraries
    export LD_LIBRARY_PATH=${STAGING_LIBDIR_NATIVE}:$LD_LIBRARY_PATH
}

FILES_${PN} += " \
    ${libdir}/kconf_update_bin/* \
    ${libdir}/plugins/*.so \
    ${libdir}/plugins/*/*.so \
    ${libdir}/plugins/*/*/*.so \
    ${datadir}/config.kcfg/*.kcfg \
    ${datadir}/dbus-1/services/*.service \
    ${datadir}/dbus-1/system-services/*.service \
    ${datadir}/kconf_update/* \
    ${datadir}/knotifications5/*.notifyrc \
    ${datadir}/kservices5/*.desktop \
    ${datadir}/kservices5/*.protocol \
    ${datadir}/kservicetypes5/*.desktop \
    ${datadir}/kxmlgui5/*/*.rc \
    ${datadir}/metainfo/*.xml \
    ${datadir}/polkit-1/actions/*.policy \
"

FILES_${PN}-dev += " \
    ${datadir}/dbus-1/interfaces/*.xml \
    ${datadir}/kdevappwizard/templates/*.tar.bz2 \
    ${libdir}/cmake/*/*.cmake \
    ${prefix}/mkspecs/modules/qt_*.pri \
"
