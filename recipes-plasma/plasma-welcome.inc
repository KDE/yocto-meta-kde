# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Welcome Center"
DESCRIPTION = "A friendly onboarding wizard for Plasma"
HOMEPAGE = "https://invent.kde.org/plasma/plasma-welcome"
LICENSE = "GPL-2.0-only"

DEPENDS += "kcmutils \
            kconfig \
            kconfigwidgets \
            kdbusaddons \
            ki18n \
            kio \
            kirigami \
            kirigami-addons \
            kjobwidgets \
            knewstuff \
            kservice \
            ksvg \
            kwindowsystem \
            libplasma \
            qtdeclarative \
"

inherit cmake_plasma
inherit mime-xdg
inherit reuse_license_checksums

FILES:${PN} += "${libdir}/qml/org/kde/plasma/welcome"
