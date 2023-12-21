# SPDX-FileCopyrightText: 2022 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma Remotecontrollers"
HOMEPAGE = "https://invent.kde.org/plasma-bigscreen/plasma-remotecontrollers"
LICENSE = "GPL-2.0-only | GPL-3.0-only | LicenseRef-KDE-Accepted-GPL"
LIC_FILES_CHKSUM = " \
    file://LICENSES/GPL-2.0-only.txt;md5=93e64b4a83c7e441e48bbdeeea05c977 \
    file://LICENSES/GPL-3.0-only.txt;md5=1c76c4cc354acaac30ed4d5eefea7245 \
    file://LICENSES/LicenseRef-KDE-Accepted-GPL.txt;md5=b4c280013bbbadfbe92219498dc5228c \
"
PR = "r0"

DEPENDS = " \
    qtwayland \
    qtwayland-native \
    kirigami \
    solid \
    kcoreaddons \
    kdeclarative \
    knotifications \
    kpackage \
    kwindowsystem \
    plasma-workspace \
"

inherit cmake_plasma
inherit mime-xdg

FILES:${PN} += " \
    ${datadir}/kpackage/kcms/kcm_mediacenter_remotecontrollers/* \
    ${libdir}/qml/org/kde/plasma/remotecontrollers/* \
"
