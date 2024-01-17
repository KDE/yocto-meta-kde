# SPDX-FileCopyrightText: 2023 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

REQUIRED_DISTRO_FEATURES = "wayland"

RDEPENDS:${PN} += " \
    bluedevil \
    breeze \
    kactivitymanagerd \
    kde-cli-tools \
    kdecoration \
    kscreenlocker \
    kwin \
    libkscreen \
    libksysguard \
    milou \
    plasma-disks \
    plasma-firewall \
    plasma-integration \
    plasma-nano \
    plasma-nm \
    plasma-pa \
    plasma-workspace \
    polkit-kde-agent-1 \
    powerdevil \
    xdg-desktop-portal-kde \
"
