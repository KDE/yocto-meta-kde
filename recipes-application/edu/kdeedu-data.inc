# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KDE Education Data"
DESCRIPTION = "Shared icons, artwork and data files for educational applications"
HOMEPAGE = "https://invent.kde.org/education/kdeedu-data"
LICENSE = "GPL-2.0"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
PR = "r0"

SRC_URI = "git://invent.kde.org/education/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kdeapp

FILES_${PN} += " \
    ${datadir}/apps/kvtml/en \
"
