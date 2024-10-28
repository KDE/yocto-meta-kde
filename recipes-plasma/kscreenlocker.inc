# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020-2023 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KScreenLocker"
HOMEPAGE = "https://invent.kde.org/plasma/kscreenlocker"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    \
    kcrash \
    kglobalaccel \
    kidletime \
    knotifications \
    ksvg \
    kwindowsystem \
    kxmlgui \
    solid \
    \
    libplasma \
    libkscreen \
    layer-shell-qt \
    \
    libpam \
    libxcb \
    wayland-native \
"

SRC_URI:append = " \
    file://kde.pam \
    file://kscreenlockerrc \
    file://kscreensaverrc \
"

inherit cmake_plasma

do_install:append() {
    # compatibility workaround for Yocto versions older than Styhead
    [ -z ${UNPACKDIR+x} ] && UNPACKDIR=${WORKDIR}

    install -d 0755 ${D}${sysconfdir}/pam.d
    install -m 0644 ${UNPACKDIR}/kde.pam ${D}${sysconfdir}/pam.d/kde
    install -d 0755 ${D}{sysconfdir}/xdg
    install -m 0644 ${UNPACKDIR}/kscreenlockerrc ${D}{sysconfdir}/xdg/
    install -m 0644 ${UNPACKDIR}/kscreensaverrc ${D}{sysconfdir}/xdg/
}

FILES:${PN} += " \
    ${datadir}/ksmserver/screenlocker/org.kde.passworddialog/*.desktop \
    ${datadir}/kpackage/kcms/kcm_screenlocker \
    ${libdir}/plugins/plasma/kcms/systemsettings/kcm_screenlocker.so \
"

RDEPENDS:${PN} += " \
    perl \
    qqc2-breeze-style \
"
