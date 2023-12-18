# SPDX-FileCopyrightText: 2019 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KDE Applications"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

PACKAGE_ARCH = "${MACHINE_ARCH}"

inherit packagegroup

RDEPENDS:${PN} = " \
    blinken \
    kanagram \
    khangman \
    \
    gwenview \
    \
    elisa \
    \
    kdeconnect-kde \
    \
    alligator \
    calindori \
    kasts \
    koko \
    kongress \
    ktrip \
    kweather \
    kclock \
    \
    kjournald \
    \
    kdialog \
    konsole \
    plasma-camera \
    plasma-settings \
"

# not ported to Qt6 yet
# krecorder
# gcompris
# okular
# marble
# kirigami-gallery
