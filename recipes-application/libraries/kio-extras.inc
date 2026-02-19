# SPDX-FileCopyrightText: 2026 Marc Ferland <marc.ferland@sonatest.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KIO Extras"
DESCRIPTION = "Additional components to increase the functionality of KIO"
HOMEPAGE = "https://invent.kde.org/network/kio-extras"
LICENSE = "BSD-2-Clause & \
           BSD-3-Clause & \
           GPL-2.0-only & \
           GPL-2.0-or-later & \
           GPL-3.0-only & \
           GPL-3.0-or-later & \
           LGPL-2.0-only & \
           LGPL-2.0-or-later & \
           LGPL-2.1-only & \
           LGPL-2.1-or-later & \
           LGPL-3.0-only & \
           LicenseRef-KDE-Accepted-GPL & \
           LicenseRef-KDE-Accepted-LGPL & \
           MIT"

DEPENDS += "karchive \
            kio \
            libkexiv2 \
            plasma-activities \
            plasma-activities-stats \
            qcoro \
            solid \
            syntax-highlighting \
"

inherit cmake_kdeapp
inherit kf6-kcmutils
inherit kf6-kconfig
inherit kf6-kcoreaddons
inherit reuse_license_checksums

EXTRA_OECMAKE += "-DWITH_LIBPROXY=OFF"

FILES:${PN} += "${libdir}/plugins/plasma/kcms/systemsettings_qwidgets \
                ${libdir}/libkioarchive6.so.6.0.0 \
                ${datadir}/kio_info \
                ${datadir}/kio_filenamesearch \
"

FILES:${PN}-dev += "${libdir}/libkioarchive6.so.6 \
                    ${incdir}/KioArchive6 \
"

RDEPENDS:${PN} += "perl"
