# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KJournald"
DESCRIPTION = "Framework for interacting with systemd-journald"
HOMEPAGE = "https://invent.kde.org/system/kjournald"
LICENSE = "MIT | LGPL-2.1-or-later"

DEPENDS += "kcoreaddons \
            kcrash \
            kirigami \
            kirigami-addons \
            qtdeclarative \
            systemd \
"

inherit cmake_kdeapp
inherit kf6-kconfig
inherit reuse_license_checksums

RDEPENDS:${PN} += "qtdeclarative-qmlplugins"
