# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KDE Plasma Mobile"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

inherit packagegroup

RDEPENDS:${PN} = " \
    aura-browser \
    kdecoration \
    kwin \
    plasma5support \
    plasma-pa \
    systemsettings \
    bluedevil \
    kglobalacceld \
    layer-shell-qt \
    plasma-bigscreen \
    plasma-remotecontrollers \
    xdg-desktop-portal-kde \
    breeze \
    kpipewire \
    libkscreen \
    plasma-integration \
    plasma-systemmonitor \
    discover \
    kscreen \
    libksysguard \
    plasma-mobile \
    plasma-workspace \
    kactivitymanagerd \
    kscreenlocker \
    milou \
    plasma-nano \
    polkit-kde-agent-1 \
    kde-cli-tools \
    kwayland-integration \
    plank-player \
    plasma-nm \
    powerdevil \
"
