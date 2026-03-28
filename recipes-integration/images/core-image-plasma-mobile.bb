# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Plasma Mobile Image"
DESCRIPTION = "Basic image running Plasma Mobile"

IMAGE_FEATURES += "splash hwcodecs"

LICENSE = "MIT"

inherit features_check

REQUIRED_DISTRO_FEATURES = "wayland"

IMAGE_INSTALL += "${CORE_IMAGE_BASE_INSTALL} \
                  dbus \
                  packagegroup-plasma-mobile \
                  sddm \
                  sddm-config-plasma-mobile \
                  ttf-noto \
                  ttf-noto-emoji-color \
                  wayland \
"

SYSTEMD_DEFAULT_TARGET = "graphical.target"

inherit core-image
