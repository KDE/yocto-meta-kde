# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma PA"
HOMEPAGE = ""
LICENSE = "BSD-3-Clause & GPL-2"
LIC_FILES_CHKSUM = " \
    file://LICENSES/BSD-3-Clause.txt;md5=954f4d71a37096249f837652a7f586c0 \
    file://LICENSES/GPL-2.0-only.txt;md5=9e2385fe012386d34dcc5c9863070881 \
    file://LICENSES/GPL-3.0-only.txt;md5=49fc03046e56a282c0c743b5d3a55b7c \
    file://LICENSES/LGPL-2.0-or-later.txt;md5=da48810c4ddf8e49efa031294a26b98c \
    file://LICENSES/LGPL-2.1-only.txt;md5=147a320ed8b16b036829a0c71d424153 \
    file://LICENSES/LGPL-3.0-only.txt;md5=8d51f5b5fd447f7a1040c3dc9f0a8de6 \
    file://LICENSES/LicenseRef-KDE-Accepted-GPL.txt;md5=b4c280013bbbadfbe92219498dc5228c \
    file://LICENSES/LicenseRef-KDE-Accepted-LGPL.txt;md5=e4b79a181b6483b37d39a27f4d75e60a \
"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    kcoreaddons \
    kdeclarative \
    kglobalaccel \
    plasma-framework \
    pulseaudio \
    libcanberra \
"

inherit cmake_plasma
inherit kf6-kdoctools

FILES:${PN} += " \
    ${libdir}/qml/org/kde/plasma/private/volume/* \
    ${libdir}/plugins/plasma/kcms/systemsettings/kcm_pulseaudio.so \
    ${datadir}/kpackage/kcms/kcm_pulseaudio \
    ${datadir}/plasma/plasmoids/org.kde.plasma.volume \
    ${datadir}/kde4/apps/kconf_update/* \
"

RDEPENDS:${PN} += "perl"
