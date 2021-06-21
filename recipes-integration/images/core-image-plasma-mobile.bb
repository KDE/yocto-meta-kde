# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "A basic KDE Plasma Mobile image"

IMAGE_FEATURES += "splash package-management hwcodecs x11"

LICENSE = "MIT"

inherit features_check

REQUIRED_DISTRO_FEATURES = "wayland x11 kde"

IMAGE_INSTALL = " \
                 ${CORE_IMAGE_BASE_INSTALL} \
                 wayland dbus \
                 sddm \
                 packagegroup-kde-frameworks5 \
                 packagegroup-plasma-mobile \
                 packagegroup-core-x11-xserver \
                 packagegroup-core-x11-utils \
                "
inherit core-image
