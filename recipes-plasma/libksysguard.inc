# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Alistair Francis <alistair.francis@wdc.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "libksysguard"
DESCRIPTION = "Library to retrieve information on the current status of computer hardware"
HOMEPAGE = "https://invent.kde.org/plasma/libksysguard"
LICENSE = "LGPL-2.1-only"

DEPENDS += "kcompletion \
            kconfig \
            kconfigwidgets \
            kcoreaddons \
            kiconthemes \
            knewstuff \
            kservice \
            kwidgetsaddons \
            kwindowsystem \
            libcap \
            libnl \
            libpcap \
            libplasma \
            lmsensors \
            networkmanager-qt \
            qtwebchannel \
"

inherit cmake_plasma
inherit reuse_license_checksums

FILES:${PN} += "${datadir}/ksysguard \
                ${libdir}/qml \
"
