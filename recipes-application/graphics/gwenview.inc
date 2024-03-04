# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Gwenview - Image Viewer"
DESCRIPTION = "Gwenview is a fast and easy to use image viewer by KDE, ideal for browsing and displaying a collection of images."
HOMEPAGE = "https://apps.kde.org/de/gwenview"
LICENSE = "GPL-2.0-only"
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
    kimageannotator \
    knotifications \
    kwidgetsaddons \
    plasma-activities \
    phonon \
    purpose \
    qtwayland \
    qtwayland-native \
"

inherit cmake_kdeapp
inherit kf6-kcoreaddons
inherit kf6-kconfig
inherit kf6-kauth
inherit mime-xdg

EXTRA_OECMAKE += "-DJPEGLIB_RUN_RESULT=true"
EXTRA_OECMAKE += "-DJPEGLIB_RUN_RESULT__TRYRUN_OUTPUT=0"

FILES:${PN} += " \
    /usr/share/solid/actions \
"
