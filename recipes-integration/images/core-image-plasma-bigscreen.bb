# SPDX-FileCopyrightText: 2022 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Plasma Bigscreen Image"
DESCRIPTION = "Basic image running Plasma Bigscreen"

IMAGE_FEATURES += "splash hwcodecs"

LICENSE = "MIT"

inherit features_check
inherit core-image

REQUIRED_DISTRO_FEATURES += "wayland"

IMAGE_INSTALL += "${CORE_IMAGE_BASE_INSTALL} \
                  dbus \
                  packagegroup-plasma-bigscreen-workspace \
                  sddm \
                  sddm-config-plasma-bigscreen \
                  wayland \
"

SYSTEMD_DEFAULT_TARGET = "graphical.target"
