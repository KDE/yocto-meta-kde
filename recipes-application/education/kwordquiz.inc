# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KWordQuiz"
DESCRIPTION = "Flash Card Trainer"
HOMEPAGE = "https://invent.kde.org/education/kwordquiz"
LICENSE = "GPL-2.0-or-later"
PR = "r0"

DEPENDS += " \
    qtbase \
    qtdeclarative \
    kcrash \
    kirigami \
    kirigami-addons \
    knewstuff \
    libkeduvocdocument \
"

inherit cmake_kdeapp
inherit kf6-kcoreaddons
inherit kf6-kconfig
inherit kf6-kauth
inherit mime-xdg
inherit reuse_license_checksums

FILES:${PN} += " \
    ${datadir}/knsrcfiles/kwordquiz.knsrc \
"
