# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2025 Marc Ferland <marc.ferland@sonatest.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Plasma Integration"
DESCRIPTION = "Qt Platform Theme integration plugins for Plasma Workspaces"
HOMEPAGE = "https://invent.kde.org/plasma/plasma-integration"
LICENSE = "LGPL-2.0-only"

DEPENDS += "breeze \
            kconfig \
            kconfigwidgets \
            kiconthemes \
            kio \
            knotifications \
            kstatusnotifieritem \
            kwayland \
            kwidgetsaddons \
            kwindowsystem \
            libxcursor \
            qtdeclarative \
            qtwayland-native \
"

inherit cmake_plasma
inherit reuse_license_checksums

RDEPENDS:${PN} += "hack-font \
                   perl \
                   ttf-noto \
                   ttf-noto-emoji-color \
                   xdg-desktop-portal-kde \
"

EXTRA_OECMAKE:append = " \
    -DCMAKE_DISABLE_FIND_PACKAGE_FontNotoSans=true \
    -DCMAKE_DISABLE_FIND_PACKAGE_FontNotoColorEmoji=true \
    -DCMAKE_DISABLE_FIND_PACKAGE_FontHack=true \
    -DCMAKE_DISABLE_FIND_PACKAGE_XDGDesktopPortalKDE=true \
"
