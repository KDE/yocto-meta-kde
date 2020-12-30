# SPDX-FileCopyrightText: 2017 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Telepathy-Qt"
HOMEPAGE = "https://telepathy.freedesktop.org/doc/telepathy-qt/"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = "qtbase"

SRC_URI = " \
    git://anongit.freedesktop.org/git/telepathy/telepathy-qt.git;nobranch=1 \
    file://0001-cross-compilation-fix.patch \
"
S = "${WORKDIR}/git"

inherit cmake_qt5 python3native

EXTRA_OECMAKE += " -DDESIRED_QT_VERSION=5 -DENABLE_TESTS=FALSE -DENABLE_FARSTREAM=FALSE -DENABLE_EXAMPLES=FALSE"

FILES_${PN}-dev += " \
    ${libdir}/cmake/TelepathyQt5/* \
    ${libdir}/cmake/TelepathyQt5Service/* \
"
