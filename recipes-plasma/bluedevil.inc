# SPDX-FileCopyrightText: 2018-2019 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Bluedevil"
DESCRIPTION = "Bluedevil adds Bluetooth capabilities to KDE Plasma"
HOMEPAGE = "https://invent.kde.org/plasma/bluedevil"
LICENSE = "GPL-2.0-only"
PR = "r0"

DEPENDS += "bluez-qt \
            kcoreaddons \
            kdbusaddons \
            kded \
            kiconthemes \
            kio \
            knotifications \
            ksvg \
            kwidgetsaddons \
            kwindowsystem \
            libplasma \
            qtdeclarative \
            shared-mime-info \
            shared-mime-info-native \
"

inherit cmake_plasma
inherit mime-xdg
inherit mime
inherit reuse_license_checksums

FILES:${PN} += "${datadir}/bluedevilwizard \
                ${datadir}/kpackage/kcms/ \
                ${datadir}/mime/packages \
                ${datadir}/plasma \
                ${datadir}/remoteview \
                ${libdir}/qml \
                ${libdir}/plugins/plasma/kcms/systemsettings/ \
"
