# SPDX-FileCopyrightText: 2026 Marc Ferland <marc.ferland@gmail.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "libolm"
DESCRIPTION = "Implementation of the olm and megolm cryptographic ratchets"
HOMEPAGE = "https://gitlab.matrix.org/matrix-org/olm"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2ee41112a44fe7014dce33e26468ba93"

inherit cmake

SRC_URI = "git://gitlab.matrix.org/matrix-org/olm.git;branch=master;protocol=https"
SRCREV = "7e0c8277032e40308987257b711b38af8d77cc69"

S = "${UNPACKDIR}/git"
