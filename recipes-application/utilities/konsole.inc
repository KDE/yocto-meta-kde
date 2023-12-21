# SPDX-FileCopyrightText: 2019-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Konsole"
HOMEPAGE = "https://konsole.kde.org/"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=5c213a7de3f013310bd272cdb6eb7a24"
PR = "r0"

DEPENDS += " \
    kio \
    knewstuff \
    knotifications \
    knotifyconfig \
    kparts \
    kpty \
    kxmlgui \
"

inherit cmake_kdeapp
inherit kf6-kcoreaddons
inherit kf6-kconfig
inherit kf6-kauth

FILES_SOLIBSDEV = ""
FILES:${PN} += " \
    ${datadir}/knsrcfiles \
    ${datadir}/kio/servicemenus \
    ${datadir}/kglobalaccel/* \
    ${datadir}/zsh/* \
"
