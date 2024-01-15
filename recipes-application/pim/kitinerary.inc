# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KItinerary"
SUMMARY = "Data Model and Extraction System for Travel Reservation information"
HOMEPAGE = "https://invent.kde.org/pim/kitinerary"
LICENSE = "LGPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://LICENSES/LGPL-2.0-or-later.txt;md5=6d2d9952d88b50a51a5c73dc431d06c7"
PR = "r0"

DEPENDS += " \
    qtbase \
    qtdeclarative \
    kcontacts \
    kcalendarcore \
    ki18n \
    kpkpass \
    kmime \
    poppler \
    zxing-cpp \
"

inherit cmake_kdeapp
inherit mime-xdg
inherit mime
inherit kf6-kconfig

FILES:${PN} += " \
    ${datadir}/mime/packages/application-vnd-kde-itinerary.xml \
"
