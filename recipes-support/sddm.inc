DESCRIPTION = "QML based X11 and Wayland display manager"
HOMEPAGE = "https://github.com/sddm/sddm"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4641e94ec96f98fabc56ff9cc48be14b"
PR = "r0"

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
    file://0001-fix-qml-installation.diff \
    file://sddm.conf \
    file://sddm.pam \
    file://sddm-autologin.pam \
"
S = "${WORKDIR}/git"

inherit cmake_qt5 pkgconfig systemd useradd

EXTRA_OECMAKE += "-DQML_INSTALL_DIR=${OE_QMAKE_PATH_QML}"

do_install_append() {
    mkdir -p ${d}${sysconfdir}
    cp ${WORKDIR}/sddm.conf ${D}${sysconfdir}/sddm.conf

    # ensure the home dir exists, sddm doesn't start without that
    mkdir -p ${D}${localstatedir}/lib/sddm
    chown -R sddm:sddm ${D}${localstatedir}/lib/sddm
    chmod 0750 ${D}${localstatedir}/lib/sddm

    # deploy PAM files
    cp ${WORKDIR}/sddm.pam ${D}${sysconfdir}/pam.d/sddm
    cp ${WORKDIR}/sddm-autologin.pam ${D}${sysconfdir}/pam.d/sddm-autologin

    # make SDDM actually auto-start
    echo "WantedBy=multi-user.target" >> ${D}/lib/systemd/system/sddm.service
}

FILES_${PN} += " \
    ${libdir}/qml \
"
SYSTEMD_SERVICE_${PN} = "${BPN}.service"
USERADD_PACKAGES = "${PN}"
USERADD_PARAM_${PN} = "--system --home ${localstatedir}/lib/sddm --shell /bin/false --user-group --groups video sddm"

RDEPENDS_${PN} += "\
    packagegroup-core-x11-xserver \
    xauth \
    xinit \
    xmessage \
    xrdb \
    qtbase-plugins \
    qtdeclarative-plugins \
    qtdeclarative-qmlplugins \
"
