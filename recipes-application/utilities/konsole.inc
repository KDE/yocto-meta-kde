# SPDX-FileCopyrightText: 2019-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Konsole"
DESCRIPTION = "Terminal emulator by KDE"
HOMEPAGE = "https://konsole.kde.org/"
LICENSE = "GPL-2.0-only"

DEPENDS += "kio \
            knewstuff \
            knotifications \
            knotifyconfig \
            kparts \
            kpty \
            kxmlgui \
"

inherit cmake_kdeapp
inherit kf6_kcoreaddons
inherit kf6_kconfig
inherit kf6_kauth
inherit reuse_license_checksums

FILES_SOLIBSDEV = ""
FILES:${PN} += "${datadir}/knsrcfiles \
                ${datadir}/kio/servicemenus \
                ${datadir}/kglobalaccel/* \
                ${datadir}/zsh/* \
"
