# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Plasma PA"
DESCRIPTION = "Plasma applet for audio volume management using PulseAudio"
HOMEPAGE = "https://invent.kde.org/plasma/plasma-pa"
LICENSE = "BSD-3-Clause & GPL-2.0-only"

DEPENDS += "kcoreaddons \
            kdeclarative \
            kglobalaccel \
            kstatusnotifieritem \
            ksvg \
            libcanberra \
            libplasma \
            pulseaudio \
            pulseaudio-qt \
            qtdeclarative \
"

FILES:${PN} += "${libdir}/qml/org/kde/plasma/private/volume/* \
                ${libdir}/plugins/plasma/kcms/systemsettings/kcm_pulseaudio.so \
                ${datadir}/kpackage/kcms/kcm_pulseaudio \
                ${datadir}/plasma/plasmoids/org.kde.plasma.volume \
                ${datadir}/kde4/apps/kconf_update/* \
"

RDEPENDS:${PN} += "kirigami-addons \
                   kitemmodels \
                   libcanberra-alsa \
                   libcanberra-pulse \
                   perl \
                   sound-theme-freedesktop \
"

inherit cmake_plasma
inherit reuse_license_checksums
