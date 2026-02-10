# SPDX-FileCopyrightText: 2024 Marc Ferland <marc.ferland@sonatest.com>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma-SDK"
HOMEPAGE = ""
LICENSE = "BSD-2-Clause & GPL-2.0-only"
PR = "r0"

DEPENDS += " \
    kcoreaddons \
    karchive \
    kcompletion \
    kconfig \
    kconfigwidgets \
    kdbusaddons \
    ki18n \
    kiconthemes \
    kitemmodels \
    kio \
    ktexteditor \
    kwidgetsaddons \
    ksvg \
    libplasma \
    plasma5support \
"

RDEPENDS:${PN} += " \
    kirigami \
"

inherit cmake_plasma
inherit kf6-kdoctools
inherit reuse_license_checksums

PACKAGES =+ "${PN}-zsh-completions"

FILES:${PN} += " \
    ${datadir}/kpackage \
    ${datadir}/plasma/shells \
"

FILES:${PN}-zsh-completions += " \
    ${datadir}/zsh \
"
