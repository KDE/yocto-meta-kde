# SPDX-FileCopyrightText: 2026 Marc Ferland <marc.ferland@sonatest.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Thumbnailers"
DESCRIPTION = "Thumbnailers for various graphics file formats"
HOMEPAGE = "https://invent.kde.org/graphics/kdegraphics-thumbnailers"
LICENSE = " \
    GPL-2.0-or-later & \
    LGPL-2.0-or-later & \
    LGPL-2.1-only & \
    LGPL-3.0-only & \
    LicenseRef-KDE-Accepted-LGPL"

DEPENDS += " \
    kio \
    libkexiv2 \
"

inherit cmake_kdeapp
inherit kf6-kconfig
inherit reuse_license_checksums

EXTRA_OECMAKE += "-DDISABLE_BLENDER=ON"
EXTRA_OECMAKE += "-DDISABLE_MOBIPOCKET=ON"
