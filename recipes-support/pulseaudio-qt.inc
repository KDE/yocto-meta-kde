# SPDX-FileCopyrightText: 2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "PulseAudio Qt Bindings - libpulse bindings for Qt"
HOMEPAGE = "https://invent.kde.org/libraries/pulseaudio-qt"
LICENSE = "LGPL-2.1-only"
LIC_FILES_CHKSUM = "file://LICENSES/LGPL-2.1-only.txt;md5=fabba2a3bfeb22a6483d44e9ae824d3f"
PR = "r0"

DEPENDS = " \
    extra-cmake-modules \
    qtbase \
    pulseaudio \
"

RDEPENDS:${PN} += " \
    pulseaudio-module-gsettings \
"

EXTRA_OECMAKE:append = " \
    -DBUILD_TESTING=OFF \
    -DQT_MAJOR_VERSION=6 \
    -DBUILD_WITH_QT6=ON \
"

SRC_URI = "git://invent.kde.org/libraries/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit kf6-cmake
