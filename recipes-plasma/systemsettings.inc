# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "System Settings"
HOMEPAGE = ""
LICENSE = "GPL-2.0"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-only.txt;md5=9e2385fe012386d34dcc5c9863070881"
PR = "r0"

DEPENDS += " \
    kitemviews \
    kcmutils \
    kio \
    kservice \
    kiconthemes \
    kwidgetsaddons \
    kwindowsystem \
    kxmlgui \
    kdbusaddons \
    kconfig \
    kpackage \
    kdeclarative \
    plasma-activities \
    plasma-activities-stats \
    kirigami \
    \
    plasma-workspace \
"

inherit cmake_plasma

FILES:${PN} += " \
    ${datadir}/kpackage/genericqml/org.kde.systemsettings.sidebar \
    ${datadir}/kglobalaccel/systemsettings.desktop \
    ${datadir}/zsh/site-functions/_systemsettings \
"
