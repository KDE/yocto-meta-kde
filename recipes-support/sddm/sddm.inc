# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2019-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "QML based X11 and Wayland display manager"
HOMEPAGE = "https://github.com/sddm/sddm"
LICENSE = "GPLv2 & CC-BY-3.0"
LIC_FILES_CHKSUM = " \
    file://LICENSE;md5=4641e94ec96f98fabc56ff9cc48be14b \
    file://LICENSE.CC-BY-3.0;md5=36b7342d5619a3a0d3b581e89803ec25 \
"

REQUIRED_DISTRO_FEATURES = "x11"

DEPENDS = " \
    qtdeclarative \
    qttools \
    qttools-native \
    extra-cmake-modules \
    libpam \
    libxcb \
"

SRC_URI = " \
    git://github.com/sddm/${BPN};nobranch=1 \
    file://0001-fix-qml-install-dir.patch \
    file://0002-Workaround-missing-sessions.patch \
    file://sddm.conf \
    file://sddm.pam \
    file://sddm-autologin.pam \
"
S = "${WORKDIR}/git"

inherit cmake_qt5
inherit pkgconfig
inherit systemd
inherit useradd
inherit features_check

EXTRA_OECMAKE += " \
    -DLOGIN_DEFS_PATH=${STAGING_DIR_HOST}${sysconfdir}/login.defs \
    -DQML_INSTALL_DIR=${OE_QMAKE_PATH_QML} \
    -DSYSTEMD_SYSTEM_UNIT_DIR=${systemd_unitdir}/system \
"

do_configure:append() {
    # fix sysroot path
    sed -i 's:${STAGING_DIR_HOST}.*${libdir}:${libdir}:g' ${B}/src/common/Constants.h
}

do_install:append() {
    install -d ${D}/${sysconfdir}/sddm.conf.d
    install -m 644 ${WORKDIR}/sddm.conf ${D}/${sysconfdir}/sddm.conf.d/00-default.conf

    install -d ${D}${sysconfdir}/pam.d
    install -m 644 ${WORKDIR}/sddm.pam ${D}${sysconfdir}/pam.d/sddm
    install -m 644 ${WORKDIR}/sddm-autologin.pam ${D}${sysconfdir}/pam.d/sddm-autologin

    install -d ${D}${localstatedir}/lib/sddm
    chown -R sddm:sddm ${D}${localstatedir}/lib/sddm
    chmod 0750 ${D}${localstatedir}/lib/sddm

    # make SDDM actually auto-start
    echo "WantedBy=multi-user.target" >> ${D}/${systemd_unitdir}/system/sddm.service
}

FILES:${PN} += "${OE_QMAKE_PATH_QML}"

SYSTEMD_SERVICE:${PN} = "${BPN}.service"

USERADD_PACKAGES = "${PN}"
USERADD_PARAM:${PN} = "--system --home ${localstatedir}/lib/sddm --shell /bin/false --user-group --groups video sddm"

RDEPENDS:${PN} += "\
    bash \
    packagegroup-core-x11-xserver \
    xcb-util \
    xauth \
    xinit \
    xmessage \
    xrdb \
    qtbase-plugins \
    qtdeclarative-plugins \
    qtdeclarative-qmlplugins \
    pam-plugin-tally \
"

RRECOMMENDS:${PN} += " \
    qtvirtualkeyboard-plugins \
    qtvirtualkeyboard-qmlplugins \
"
