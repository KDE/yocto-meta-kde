# SPDX-FileCopyrightText: 2025 Marc Ferland <marc.ferland@sonatest.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Aurorae Theme"
DESCRIPTION = "Aurorae is a themeable window decoration for KWin"
HOMEPAGE = "https://invent.kde.org/plasma/aurorae"
LICENSE = "GPL-2.0-or-later & MIT"
LIC_FILES_CHKSUM = " \
    file://LICENSES/GPL-2.0-or-later.txt;md5=fed54355545ffd980b814dab4a3b312c \
    file://LICENSES/MIT.txt;md5=e267b5203c8a34cf7f21e5a2102df564 \
"

DEPENDS = " \
    kcmutils \
    kconfig \
    kcoreaddons \
    kdecoration \
    ki18n \
    knewstuff \
    kpackage \
"

RDEPENDS:${PN} += "ksvg bash"

inherit cmake_plasma

FILES:${PN} += " \
    ${libdir}/qml/org/kde/kwin/decoration \
    ${libdir}/qml/org/kde/kwin/decorations \
    ${datadir}/kwin/aurorae \
    ${datadir}/kwin/decorations \
"
