# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "A basic KDE Plasma Mobile image"

IMAGE_FEATURES += "splash hwcodecs"

LICENSE = "MIT"

inherit features_check

REQUIRED_DISTRO_FEATURES = "wayland"

IMAGE_INSTALL = " \
                 ${CORE_IMAGE_BASE_INSTALL} \
                 wayland dbus \
                 sddm \
                 sddm-config-plasma-mobile \
                 packagegroup-plasma-mobile \
                 ttf-noto \
                 ttf-noto-emoji-color \
                "

SYSTEMD_DEFAULT_TARGET="graphical.target"

inherit core-image
