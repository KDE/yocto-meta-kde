# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Framework for interacting with systemd-journald"
HOMEPAGE = ""
LICENSE = "MIT | LGPL-2.1-or-later"

DEPENDS = " \
    kcoreaddons \
    qtbase \
    qtdeclarative \
    systemd \
    kcrash \
    kirigami \
    kirigami-addons \
"

inherit cmake_kdeapp
inherit pkgconfig
inherit kf6-kconfig
inherit reuse_license_checksums

RDEPENDS:${PN} += " \
    qtdeclarative-qmlplugins \
"
