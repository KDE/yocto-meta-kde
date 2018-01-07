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

FILES_${PN} += " \
    ${libdir}/kconf_update_bin/* \
    ${libdir}/plugins/*.so \
    ${libdir}/plugins/*/*.so \
    ${libdir}/plugins/*/*/*.so \
    ${datadir}/config.kcfg/*.kcfg \
    ${datadir}/dbus-1/services/*.service \
    ${datadir}/kconf_update/*.upd \
    ${datadir}/knotifications5/*.notifyrc \
    ${datadir}/kservices5/*.desktop \
    ${datadir}/kservices5/*.protocol \
    ${datadir}/kservicetypes5/*.desktop \
    ${datadir}/polkit-1/actions/*.policy \
"

FILES_${PN}-dev += " \
    ${datadir}/dbus-1/interfaces/*.xml \
    ${datadir}/kdevappwizard/templates/*.tar.bz2 \
    ${libdir}/cmake/*/*.cmake \
    ${prefix}/mkspecs/modules/qt_*.pri \
"
