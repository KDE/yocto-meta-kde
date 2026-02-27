# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Plasma Firewall"
DESCRIPTION = "Control Panel for your system firewall"
HOMEPAGE = "https://invent.kde.org/plasma/plasma-firewall"
LICENSE = "GPL-2.0-only"
PR = "r0"

DEPENDS += "kauth \
            kcmutils \
            kconfig \
            kcoreaddons \
            ki18n \
            qtdeclarative \
"

FILES:${PN} += "${libdir}/libkcm_firewall_core.so"

RDEPENDS:${PN} += "firewalld"

inherit cmake_plasma
inherit mime-xdg
inherit reuse_license_checksums

EXTRA_OECMAKE += "-DBUILD_UFW_BACKEND=OFF"

INSANE_SKIP:${PN} = "dev-so"
FILES_SOLIBSDEV = ""
