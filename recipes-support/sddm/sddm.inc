# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2019-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2023-2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "QML based Display Manager"
HOMEPAGE = "https://github.com/sddm/sddm"
LICENSE = "GPL-2.0-only & CC-BY-3.0"
LIC_FILES_CHKSUM = " \
    file://LICENSE;md5=4641e94ec96f98fabc56ff9cc48be14b \
    file://LICENSE.CC-BY-3.0;md5=36b7342d5619a3a0d3b581e89803ec25 \
"

REQUIRED_DISTRO_FEATURES = "wayland"

DEPENDS = " \
    qtdeclarative \
    qttools \
    qttools-native \
    extra-cmake-modules \
    libpam \
    libxcb \
"

SRC_URI = " \
    git://github.com/sddm/${BPN};nobranch=1;protocol=https \
    file://sddm.conf.plasma-desktop \
    file://sddm.conf.plasma-mobile \
    file://sddm.conf.plasma-bigscreen \
    file://sddm.pam \
    file://sddm-autologin.pam \
    file://sddm-greeter.pam \
"

S = "${WORKDIR}/git"

inherit qt6-cmake
inherit pkgconfig
inherit systemd
inherit useradd
inherit features_check

EXTRA_OECMAKE += " \
    -DLOGIN_DEFS_PATH=${STAGING_DIR_HOST}${sysconfdir}/login.defs \
    -DQML_INSTALL_DIR=${QT6_INSTALL_QMLDIR} \
    -DSYSTEMD_SYSTEM_UNIT_DIR=${systemd_unitdir}/system \
    -DBUILD_WITH_QT6=ON \
"

do_configure:append() {
    # fix sysroot path
    sed -i 's:${STAGING_DIR_HOST}.*${libdir}:${libdir}:g' ${B}/src/common/Constants.h
}

do_install:append() {
    # compatibility workaround for Yocto versions older than Styhead
    [ -z ${UNPACKDIR+x} ] && UNPACKDIR=${WORKDIR}

    install -d ${D}/${sysconfdir}/sddm.conf.d

    # autologin configurations
    install -m 644 ${UNPACKDIR}/sddm.conf.plasma-desktop ${D}/${sysconfdir}/sddm.conf.d/00-plasma-desktop.conf
    install -m 644 ${UNPACKDIR}/sddm.conf.plasma-mobile ${D}/${sysconfdir}/sddm.conf.d/01-plasma-mobile.conf
    install -m 644 ${UNPACKDIR}/sddm.conf.plasma-bigscreen ${D}/${sysconfdir}/sddm.conf.d/02-plasma-bigscreen.conf

    install -d ${D}${sysconfdir}/pam.d
    install -m 644 ${UNPACKDIR}/sddm.pam ${D}${sysconfdir}/pam.d/sddm
    install -m 644 ${UNPACKDIR}/sddm-autologin.pam ${D}${sysconfdir}/pam.d/sddm-autologin
    install -m 644 ${UNPACKDIR}/sddm-greeter.pam ${D}${sysconfdir}/pam.d/sddm-greeter

    install -d ${D}${localstatedir}/lib/sddm
    chown -R sddm:sddm ${D}${localstatedir}/lib/sddm
    chmod 0750 ${D}${localstatedir}/lib/sddm
}

PACKAGES =+ " \
    ${PN}-config-plasma-mobile \
    ${PN}-config-plasma-bigscreen \
    ${PN}-config-plasma-desktop \
"

FILES:${PN} += " \
    ${libdir}/qml/* \
    ${libdir}/sysusers.d/* \
    ${libdir}/tmpfiles.d/* \
    ${datadir}/dbus-1/system.d/* \
"

FILES:${PN}-config-plasma-desktop = " \
    ${sysconfdir}/sddm.conf.d/00-plasma-desktop.conf \
"

FILES:${PN}-config-plasma-mobile = " \
    ${sysconfdir}/sddm.conf.d/01-plasma-mobile.conf \
"

FILES:${PN}-config-plasma-bigscreen = " \
    ${sysconfdir}/sddm.conf.d/02-plasma-bigscreen.conf \
"

SYSTEMD_SERVICE:${PN} = "${BPN}.service"

USERADD_PACKAGES = "${PN}"
USERADD_PARAM:${PN} = "--system --home ${localstatedir}/lib/sddm --shell /bin/false --user-group --groups video sddm"

RDEPENDS:${PN} += "\
    bash \
    xcb-util \
    qtbase-plugins \
    qtdeclarative-plugins \
    qtdeclarative-qmlplugins \
"

RRECOMMENDS:${PN} += " \
    qtvirtualkeyboard-plugins \
    qtvirtualkeyboard-qmlplugins \
"
