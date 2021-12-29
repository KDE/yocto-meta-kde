# SPDX-FileCopyrightText: 2019 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KDE Applications"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

inherit packagegroup

RDEPENDS:${PN} = " \
    kdialog \
    kirigami-gallery \
    konsole \
    \
    gwenview \
    okular \
    \
    blinken \
    marble \
    kanagram \
    khangman \
    gcompris \
    \
    elisa \
    \
    kjournald-browser \
"
