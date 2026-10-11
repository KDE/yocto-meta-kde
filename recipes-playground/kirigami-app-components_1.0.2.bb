# SPDX-FileCopyrightText: 2026 Marc Ferland <marc.ferland@gmail.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Kirigami App Components"
DESCRIPTION = "Application components for Kirigami, including shortcut configuration"
HOMEPAGE = "https://invent.kde.org/libraries/kirigami-app-components"
LICENSE = "BSD-3-Clause & LGPL-2.0-or-later & LGPL-2.1-or-later & CC0-1.0 & FSFAP"

DEPENDS += "kconfig \
            kguiaddons \
            ki18n \
            kirigami \
            qtdeclarative \
"

SRC_URI = "https://download.kde.org/stable/${BPN}/${BPN}-${PV}.tar.xz"
SRC_URI[sha256sum] = "6bfd9e0a3a4b7d17505f0c3c0c395628165973b6f4cf1e4a7a1f3342873b44d0"

inherit cmake_kdeapp
inherit kf6_kconfig
inherit reuse_license_checksums

RDEPENDS:${PN} += "ki18n kirigami qtdeclarative-qmlplugins"
