# SPDX-FileCopyrightText: 2022 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Plasma Bigscreen"
DESCRIPTION = "Base applications for Plasma Bigscreen"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

PACKAGE_ARCH = "${MACHINE_ARCH}"

inherit packagegroup features_check
require plasma-workspace-common.inc

RDEPENDS:${PN}:append = " \
    plank-player \
    plasma-bigscreen \
    plasma-remotecontrollers \
"

# TODO currently excluded because of high appstream dependency
# discover
# aura-browser
