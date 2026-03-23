# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Itinerary"
DESCRIPTION = "Itinerary and boarding pass management application"
HOMEPAGE = "https://invent.kde.org/pim/itinerary"
LICENSE = "LGPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://LICENSES/LGPL-2.0-or-later.txt;md5=6d2d9952d88b50a51a5c73dc431d06c7"

DEPENDS += "kcalendarcore \
            kcontacts \
            kfilemetadata \
            khealthcertificate \
            kholidays \
            kirigami \
            kirigami-addons \
            kitinerary \
            kosmindoormap \
            kpkpass \
            kpublictransport \
            kunitconversion \
            libquotient \
            qcoro \
            qqc2-desktop-style \
            qtdeclarative \
            qtkeychain \
            qtpositioning \
"

inherit cmake_kdeapp
inherit mime-xdg
inherit mime
inherit kf6-kconfig

FILES:${PN} += "${libdir}/libSolidExtras.so"
FILES_SOLIBSDEV = ""

RDEPENDS:${PN} += "prison \
                   qtlocation-qmlplugins \
                   qtmultimedia-qmlplugins \
                   qtpositioning-qmlplugins \
                   solid \
"
