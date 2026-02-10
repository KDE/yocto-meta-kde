# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Breeze Style"
HOMEPAGE = ""
LICENSE = "GPL-2.0-only"
PR = "r0"

DEPENDS = " \
    fftw \
    kconfigwidgets \
    kcoreaddons \
    kdecoration \
    kguiaddons \
    kirigami \
    kpackage \
    kwayland \
    kwindowsystem \
    frameworkintegration \
"

inherit cmake_plasma
inherit reuse_license_checksums

EXTRA_OECMAKE += " \
    -DBUILD_QT5:BOOL=OFF \
"

FILES:${PN} += " \
    ${libdir}/qml/QtQuick/Controls/Styles \
    ${datadir}/kstyle/themes \
    ${datadir}/plasma/look-and-feel \
    ${datadir}/color-schemes \
    ${datadir}/icons \
    ${datadir}/QtCurve/*.qtcurve \
    ${datadir}/wallpapers \
"

RDEPENDS:${PN} += " \
    breeze-icons \
"
