# SPDX-FileCopyrightText: 2022 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KDE Plasma Bigscreen"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

PACKAGE_ARCH = "${MACHINE_ARCH}"

inherit packagegroup features_check

REQUIRED_DISTRO_FEATURES = "wayland x11 kde"

# Qt5's WebEngine requires Python2
WEBENGINE_PACKAGES = " \
    aura-browser \
    discover \
"

RDEPENDS:${PN} = " \
    bluedevil \
    breeze \
    kactivitymanagerd \
    kde-cli-tools \
    kdecoration \
    kscreen \
    kscreenlocker \
    kwayland-integration \
    kwin \
    libkscreen \
    libksysguard \
    milou \
    plasma-integration \
    plasma-nano \
    plasma-nm \
    plasma-pa \
    plasma-workspace \
    polkit-kde-agent-1 \
    powerdevil \
    plasma-settings \
    xdg-desktop-portal-kde \
    ${@bb.utils.contains('BBFILE_COLLECTIONS', 'python2-layer', '${WEBENGINE_PACKAGES}', '', d)} \
"

RDEPENDS:${PN} += " \
    plasma-bigscreen \
    plasma-remotecontrollers \
    plank-player \
"
