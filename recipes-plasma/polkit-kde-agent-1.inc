# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KDE Polkit Agent"
HOMEPAGE = ""
LICENSE = "GPL-2.0+"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-or-later.txt;md5=9e2385fe012386d34dcc5c9863070881"
PR = "r0"

DEPENDS = " \
    kwindowsystem \
    kdbusaddons \
    kwidgetsaddons \
    kcoreaddons \
    kcrash \
    kiconthemes \
    polkit-qt-1 \
"

inherit cmake_plasma

EXTRA_OECMAKE += " \
    -DOE_KF6_PATH_HOST_ROOT=${STAGING_DIR_HOST} \
"
