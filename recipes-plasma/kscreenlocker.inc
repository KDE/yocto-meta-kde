# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KScreenLocker"
HOMEPAGE = ""
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    kwayland \
    kcrash \
    kdeclarative \
    kglobalaccel \
    kidletime \
    kcmutils \
    knotifications \
    solid \
    ktextwidgets \
    kwindowsystem \
    kxmlgui \
    libxcb \
    libpam \
    wayland-native \
"

SRC_URI = " \
    git://invent.kde.org/plasma/${BPN};nobranch=1;protocol=https \
    file://kde.pam \
"
S = "${WORKDIR}/git"


inherit cmake_plasma

do_install_append() {
    install -d ${D}${sysconfdir}/pam.d
    install -m 0644 ${WORKDIR}/kde.pam ${D}${sysconfdir}/pam.d/kde
}

FILES_${PN} += " \
    ${datadir}/ksmserver/screenlocker/org.kde.passworddialog/*.desktop \
    ${datadir}/kpackage/kcms/kcm_screenlocker \
"

RDEPENDS_${PN} += "perl"
