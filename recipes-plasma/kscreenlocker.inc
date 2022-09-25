# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KScreenLocker"
HOMEPAGE = ""
LICENSE = "GPL-2.0"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
PR = "r0"

DEPENDS = " \
    kcrash \
    kdeclarative \
    kglobalaccel \
    kidletime \
    knotifications \
    ktextwidgets \
    kwayland \
    kwindowsystem \
    kxmlgui \
    layer-shell-qt \
    libpam \
    libxcb \
    qtdeclarative \
    solid \
    wayland-native \
"

SRC_URI:append = " \
    file://kde.pam \
"

inherit cmake_plasma

do_install:append() {
    install -d ${D}${sysconfdir}/pam.d
    install -m 0644 ${WORKDIR}/kde.pam ${D}${sysconfdir}/pam.d/kde
}

FILES:${PN} += " \
    ${datadir}/ksmserver/screenlocker/org.kde.passworddialog/*.desktop \
    ${datadir}/kpackage/kcms/kcm_screenlocker \
    ${libdir}/plugins/plasma/kcms/systemsettings/kcm_screenlocker.so \
"

RDEPENDS:${PN} += "perl"
