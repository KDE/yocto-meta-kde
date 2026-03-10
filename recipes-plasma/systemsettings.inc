# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "System Settings"
DESCRIPTION = "Control center to configure your Plasma Desktop"
HOMEPAGE = "https://invent.kde.org/plasma/systemsettings"
LICENSE = "GPL-2.0-only"

DEPENDS += "kcmutils \
            kconfig \
            kdbusaddons \
            kiconthemes \
            kio \
            kirigami \
            kitemmodels \
            kitemviews \
            kjobwidgets \
            krunner \
            kservice \
            kwidgetsaddons \
            kwindowsystem \
            kxmlgui \
            plasma-activities \
"

inherit cmake_plasma
inherit reuse_license_checksums

FILES:${PN} += "${datadir}/kpackage/genericqml/org.kde.systemsettings.sidebar \
                ${datadir}/kglobalaccel/systemsettings.desktop \
                ${datadir}/zsh/site-functions/_systemsettings \
"
