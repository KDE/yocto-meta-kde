# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma Mobile Settings"
HOMEPAGE = ""
LICENSE = "GPL-2.0+"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
PR = "r0"

DEPENDS = " \
    plasma-framework \
    kitemmodels \
    kinit \
"

inherit cmake_plasma
inherit kdoctools

FILES_${PN} += " \
    ${libdir}/qml \
    ${datadir}/kpackage \
"
