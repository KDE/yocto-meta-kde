# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KWordQuiz"
DESCRIPTION = "Flash Card Trainer"
HOMEPAGE = "https://invent.kde.org/education/kwordquiz"
LICENSE = "GPL-2.0-or-later"

DEPENDS += "kcrash \
            kirigami \
            kirigami-addons \
            knewstuff \
            libkeduvocdocument \
            qtdeclarative \
"

inherit cmake_kdeapp
inherit kf6_kcoreaddons
inherit kf6_kconfig
inherit kf6_kauth
inherit mime-xdg
inherit reuse_license_checksums
require recipes-application/common/application_src.inc

FILES:${PN} += "${datadir}/knsrcfiles/kwordquiz.knsrc"
