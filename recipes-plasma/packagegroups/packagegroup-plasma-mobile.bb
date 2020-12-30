# SPDX-FileCopyrightText: 2017-2019 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KDE Plasma Mobile"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

PACKAGE_ARCH = "${MACHINE_ARCH}"

inherit packagegroup distro_features_check

REQUIRED_DISTRO_FEATURES = "wayland x11 kde"

RDEPENDS_${PN} = " \
    bluedevil \
    breeze \
    discover \
    kactivitymanagerd \
    kde-cli-tools \
    kdecoration \
    kscreen \
    kscreenlocker \
    ksysguard \
    kwayland-integration \
    kwin \
    libkscreen \
    libksysguard \
    milou \
    plasma-integration \
    plasma-nano \
    plasma-nm \
    plasma-pa \
    plasma-phone-components \
    plasma-workspace \
    polkit-kde-agent-1 \
    powerdevil \
    plasma-settings \
    xdg-desktop-portal-kde \
"
