# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Gwenview - Image Viewer"
DESCRIPTION = "Gwenview is a fast and easy to use image viewer by KDE, ideal for browsing and displaying a collection of images."
HOMEPAGE = "https://apps.kde.org/de/gwenview"
LICENSE = "GPL-2.0"
LIC_FILES_CHKSUM = "file://COPYING;md5=5a3169a2d39a757efd8b7aa66a69d97b"
PR = "r0"

DEPENDS += " \
    exiv2 \
    lcms \
    jpeg \
    baloo \
    kio \
    kitemmodels \
    ki18n \
    kparts \
    kwindowsystem \
    kiconthemes \
    knotifications \
    kwidgetsaddons \
    kactivities \
    purpose \
"

inherit cmake_kdeapp
inherit kcoreaddons
inherit kconfig
inherit kauth
inherit mime-xdg

EXTRA_OECMAKE += "-DJPEGLIB_RUN_RESULT=true"
EXTRA_OECMAKE += "-DJPEGLIB_RUN_RESULT__TRYRUN_OUTPUT=0"

FILES:${PN} += " \
    /usr/share/solid/actions \
"
