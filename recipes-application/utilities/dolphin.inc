# SPDX-FileCopyrightText: 2024 Marc Ferland <marc.ferland@sonatest.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Dolphin"
DESCRIPTION = "File manager by KDE"
HOMEPAGE = "https://invent.kde.org/system/dolphin"
LICENSE = "BSD-2-Clause & \
           BSD-3-Clause & \
           GPL-2.0-only & \
           GPL-2.0-or-later & \
           GPL-2.0-or-later & \
           GPL-3.0-only & \
           LGPL-2.0-only & \
           LGPL-2.0-or-later & \
           LGPL-2.1-only & \
           LGPL-3.0-only & \
           LicenseRef-KDE-Accepted-GPL \
"

DEPENDS += "baloo \
            baloo-widgets \
            kbookmarks \
            kcodecs \
            kcompletion \
            kconfig \
            kcrash \
            kdbusaddons \
            kfilemetadata \
            kguiaddons \
            ki18n \
            kiconthemes \
            kio \
            knewstuff \
            knotifications \
            kparts \
            ktextwidgets \
            kuserfeedback \
            kwindowsystem \
            phonon \
            solid \
"

FILES:${PN} += "${datadir}/knsrcfiles \
                ${datadir}/kglobalaccel \
                ${datadir}/zsh \
"

RDEPENDS:${PN} += "ffmpegthumbs \
                   kdegraphics-thumbnailers \
                   kio-extras \
"

inherit cmake_kdeapp
inherit kf6-kcmutils
inherit kf6-kconfig
inherit kf6-kcoreaddons
inherit mime-xdg
inherit systemd
inherit reuse_license_checksums

SYSTEMD_SERVICE:${PN} = "plasma-dolphin.service"

SYSTEMD_AUTO_ENABLE = "disable"
