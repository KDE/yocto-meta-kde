# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KQuickImageEditor"
DESCRIPTION = "Image editing components"
HOMEPAGE = "https://invent.kde.org/libraries/kquickimageeditor/"
LICENSE = "BSD-2-Clause & LGPL-2.1-only & LGPL-2.1-or-later & LGPL-3.0-only & LicenseRef-KDE-Accepted-GPL"

DEPENDS += "qtdeclarative"

SRC_URI = "git://invent.kde.org/libraries/${BPN};nobranch=1;protocol=https"

# v0.6.1
SRCREV = "dc18bdf112c2959d515608fb524207b7d2728c34"

inherit cmake_kdeapp
inherit kf6_kconfig
inherit reuse_license_checksums
