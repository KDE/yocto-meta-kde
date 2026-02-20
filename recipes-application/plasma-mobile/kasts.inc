# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Kasts"
DESCRIPTION = "Kasts is a convergent podcast application."
HOMEPAGE = "https://invent.kde.org/plasma-mobile/kasts"
LICENSE = "GPL-3.0-only"
PR = "r0"

DEPENDS += "kcolorscheme \
            ki18n \
            kirigami \
            kirigami-addons \
            networkmanager-qt \
            qtdeclarative \
            qtkeychain \
            qtmultimedia \
            qtsvg \
            syndication \
            taglib \
            threadweaver \
"

inherit cmake_kdeapp
inherit kf6-kconfig
inherit kf6-kcoreaddons
inherit reuse_license_checksums

FILES_SOLIBSDEV = ""

FILES:${PN} += "${libdir}/libKastsSolidExtras.so \
                ${libdir}/libKMediaSession.so \
"
