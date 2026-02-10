# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KDE Polkit Agent"
HOMEPAGE = ""
LICENSE = "GPL-2.0-or-later"
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
inherit reuse_license_checksums

EXTRA_OECMAKE += " \
    -DOE_KF6_PATH_HOST_ROOT=${STAGING_DIR_HOST} \
"
