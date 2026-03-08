# SPDX-FileCopyrightText: 2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "PulseAudio-Qt"
DESCRIPTION = "Qt bindings for libpulse"
HOMEPAGE = "https://invent.kde.org/libraries/pulseaudio-qt"
LICENSE = "LGPL-2.1-only"
PR = "r0"

DEPENDS += "extra-cmake-modules \
            pulseaudio \
            qtbase \
"

RDEPENDS:${PN} += "pulseaudio-module-gsettings"

EXTRA_OECMAKE:append = " -DBUILD_TESTING=OFF"
EXTRA_OECMAKE:append = " -DQT_MAJOR_VERSION=6"
EXTRA_OECMAKE:append = " -DBUILD_WITH_QT6=ON"

inherit kf6-cmake
inherit reuse_license_checksums
