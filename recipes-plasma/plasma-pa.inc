# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma PA"
HOMEPAGE = ""
LICENSE = "BSD-3-Clause & GPL-2.0-only"
PR = "r0"

DEPENDS += " \
    qtdeclarative \
    kcoreaddons \
    kdeclarative \
    kglobalaccel \
    kstatusnotifieritem \
    ksvg \
    libplasma \
    pulseaudio \
    pulseaudio-qt \
    libcanberra \
"

RDEPENDS:${PN} += " \
    libcanberra-alsa \
    libcanberra-pulse \
    kirigami-addons \
    kitemmodels \
    sound-theme-freedesktop \
"

inherit cmake_plasma
inherit kf6-kdoctools
inherit reuse_license_checksums

FILES:${PN} += " \
    ${libdir}/qml/org/kde/plasma/private/volume/* \
    ${libdir}/plugins/plasma/kcms/systemsettings/kcm_pulseaudio.so \
    ${datadir}/kpackage/kcms/kcm_pulseaudio \
    ${datadir}/plasma/plasmoids/org.kde.plasma.volume \
    ${datadir}/kde4/apps/kconf_update/* \
"

RDEPENDS:${PN} += "perl"
