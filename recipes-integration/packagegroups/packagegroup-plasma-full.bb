# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KDE Plasma Mobile"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

inherit packagegroup

RDEPENDS:${PN} = " \
    bluedevil \
    breeze \
    discover \
    kactivities \
    kactivities-stats \
    kactivitymanagerd \
    kde-cli-tools \
    kdecoration \
    kglobalacceld \
    kpipewire \
    kscreen \
    kscreenlocker \
    kwayland \
    kwin \
    layer-shell-qt \
    libkscreen \
    libksysguard \
    milou \
    plasma-framework \
    plasma-integration \
    plasma-mobile \
    plasma-nano \
    plasma-nm \
    plasma-pa \
    plasma-systemmonitor \
    plasma-workspace \
    plasma5support \
    polkit-kde-agent-1 \
    powerdevil \
    systemsettings \
    xdg-desktop-portal-kde \
"
