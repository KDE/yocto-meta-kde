# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KDE Education Data"
DESCRIPTION = "Shared icons, artwork and data files for educational applications"
HOMEPAGE = "https://invent.kde.org/education/kdeedu-data"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
PR = "r0"

inherit cmake_kdeapp

FILES:${PN} += " \
    ${datadir}/apps/kvtml/* \
"
