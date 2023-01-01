# SPDX-FileCopyrightText: 2022 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "A basic KDE Plasma Bigscreen image"

IMAGE_FEATURES += "splash package-management hwcodecs x11"

LICENSE = "MIT"

inherit features_check
inherit core-image

REQUIRED_DISTRO_FEATURES += "wayland x11 kde"

IMAGE_INSTALL += " \
    ${CORE_IMAGE_BASE_INSTALL} \
    wayland \
    dbus \
    sddm \
    sddm-config-plasma-bigscreen \
    packagegroup-plasma-bigscreen-workspace \
    packagegroup-core-x11-utils \
"
