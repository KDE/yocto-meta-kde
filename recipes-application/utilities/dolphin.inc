# SPDX-FileCopyrightText: 2024 Marc Ferland <marc.ferland@sonatest.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Dolphin"
DESCRIPTION = "File manager by KDE"
HOMEPAGE = "https://invent.kde.org/system/dolphin"
LICENSE = "GPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://COPYING;md5=5c213a7de3f013310bd272cdb6eb7a24"

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

SYSTEMD_SERVICE:${PN} = "plasma-dolphin.service"

SYSTEMD_AUTO_ENABLE = "disable"
