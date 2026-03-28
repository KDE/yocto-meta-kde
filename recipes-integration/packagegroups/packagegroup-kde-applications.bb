# SPDX-FileCopyrightText: 2019 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KDE Applications"
DESCRIPTION = "Collection of common KDE applications"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

PACKAGE_ARCH = "${MACHINE_ARCH}"

inherit packagegroup

RDEPENDS:${PN} += "alligator \
                   blinken \
                   dragon \
                   elisa \
                   gcompris \
                   gwenview \
                   itinerary \
                   kanagram \
                   kasts \
                   kclock \
                   kdeconnect-kde \
                   kdialog \
                   khangman \
                   kjournald \
                   koko \
                   kongress \
                   konsole \
                   krecorder \
                   ktrip \
                   kweather \
                   kwordquiz \
                   marble \
                   okular \
                   plasma-camera \
                   plasma-settings \
                   washipad \
"
