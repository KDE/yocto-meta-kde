# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Polkit KDE Agent"
DESCRIPTION = "Daemon providing a Polkit authentication UI for Plasma"
HOMEPAGE = "https://invent.kde.org/plasma/polkit-kde-agent-1"
LICENSE = "GPL-2.0-or-later"
PR = "r0"

DEPENDS += "kcoreaddons \
            kcrash \
            kdbusaddons \
            kiconthemes \
            kwidgetsaddons \
            kwindowsystem \
            polkit-qt-1 \
"

inherit cmake_plasma
inherit reuse_license_checksums

EXTRA_OECMAKE += "-DOE_KF6_PATH_HOST_ROOT=${STAGING_DIR_HOST}"
