# SPDX-FileCopyrightText: 2019-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Konsole"
HOMEPAGE = "https://konsole.kde.org/"
LICENSE = "GPL-2.0"
LIC_FILES_CHKSUM = "file://COPYING;md5=5c213a7de3f013310bd272cdb6eb7a24"
PR = "r0"

DEPENDS += " \
    kinit \
    kio \
    knewstuff \
    knotifications \
    knotifyconfig \
    kparts \
    kpty \
    kxmlgui \
"

inherit cmake_kdeapp
inherit kcoreaddons
inherit kconfig
inherit kauth

FILES_SOLIBSDEV = ""
FILES:${PN} += " \
    ${datadir}/knsrcfiles \
    ${datadir}/kio/servicemenus \
"
