# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020-2023 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Plasma Activities"
DESCRIPTION = "Core components for the KDE's Activities System"
HOMEPAGE = "https://invent.kde.org/plasma/plasma-activities"
LICENSE = "LGPL-2.1-only"
PR = "r0"

DEPENDS += "boost \
            kconfig \
            kconfig-native \
            kcoreaddons \
            kcoreaddons-native \
            kwindowsystem \
            qtdeclarative \
"

inherit cmake_plasma
inherit reuse_license_checksums

FILES:${PN} += "${libdir}/qml/org/kde/activities/*"
