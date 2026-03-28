# SPDX-FileCopyrightText: 2022 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Plasma Remote Controller Support"
DESCRIPTION = "Translate various input device events into keyboard and pointer events"
HOMEPAGE = "https://invent.kde.org/plasma-bigscreen/plasma-remotecontrollers"
LICENSE = "GPL-2.0-only | GPL-3.0-only | LicenseRef-KDE-Accepted-GPL"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-only.txt;md5=93e64b4a83c7e441e48bbdeeea05c977 \
                    file://LICENSES/GPL-3.0-only.txt;md5=1c76c4cc354acaac30ed4d5eefea7245 \
                    file://LICENSES/LicenseRef-KDE-Accepted-GPL.txt;md5=b4c280013bbbadfbe92219498dc5228c \
"

DEPENDS += "kcoreaddons \
            kdeclarative \
            kirigami \
            knotifications \
            kpackage \
            kwindowsystem \
            plasma-workspace \
            qtwayland \
            qtwayland-native \
            solid \
"

inherit cmake_plasma
inherit mime-xdg

FILES:${PN} += "${datadir}/kpackage/kcms/kcm_mediacenter_remotecontrollers/* \
                ${libdir}/qml/org/kde/plasma/remotecontrollers/* \
"
