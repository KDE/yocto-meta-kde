# SPDX-FileCopyrightText: 2024 Marc Ferland <marc.ferland@sonatest.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Plasma SDK"
DESCRIPTION = "Applications useful for Plasma development"
HOMEPAGE = "https://invent.kde.org/plasma/plasma-sdk"
LICENSE = "BSD-2-Clause & GPL-2.0-only"

DEPENDS += "karchive \
            kcompletion \
            kconfig \
            kconfigwidgets \
            kcoreaddons \
            kdbusaddons \
            ki18n \
            kiconthemes \
            kio \
            kitemmodels \
            ksvg \
            ktexteditor \
            kwidgetsaddons \
            libplasma \
            plasma5support \
"

PACKAGES =+ "${PN}-zsh-completions"

FILES:${PN} += "${datadir}/kpackage \
                ${datadir}/plasma/shells \
"
FILES:${PN}-zsh-completions += "${datadir}/zsh"

RDEPENDS:${PN} += "kirigami"

inherit cmake_plasma
inherit reuse_license_checksums
