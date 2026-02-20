# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KItinerary"
DESCRIPTION = "Data Model and Extraction System for Travel Reservation information"
HOMEPAGE = "https://invent.kde.org/pim/kitinerary"
LICENSE = "LGPL-2.0-or-later"
PR = "r0"

DEPENDS += "kcalendarcore \
            kcontacts \
            ki18n \
            kmime \
            kpkpass \
            poppler \
            qtdeclarative \
            zxing-cpp \
"

inherit cmake_kdeapp
inherit mime-xdg
inherit mime
inherit kf6-kconfig
inherit reuse_license_checksums

FILES:${PN} += "${datadir}/mime/packages/application-vnd-kde-itinerary.xml"
