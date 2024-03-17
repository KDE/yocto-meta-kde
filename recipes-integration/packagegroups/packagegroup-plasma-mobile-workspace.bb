# SPDX-FileCopyrightText: 2017-2019 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2022 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KDE Plasma Mobile"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

PACKAGE_ARCH = "${MACHINE_ARCH}"

inherit packagegroup features_check
require plasma-workspace-common.inc

RDEPENDS:${PN}:append = " \
    plasma-mobile \
    ${@bb.utils.contains('DISTRO_FEATURES', 'desktop-portal', 'discover', '', d)} \
"
