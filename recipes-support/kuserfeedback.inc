# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KUserFeedback"
DESCRIPTION = "Framework for collecting user feedback for apps via telemetry and surveys"
HOMEPAGE = "https://invent.kde.org/libraries/kuserfeedback"
LICENSE = "MIT & BSD-3-Clause"
LIC_FILES_CHKSUM = " \
    file://COPYING.LIB;md5=61be4d272e55cc2609d58596cf084908 \
"
PR = "r0"

DEPENDS = " \
    qtbase \
"

SRC_URI = "git://invent.kde.org/libraries/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kdeapp
inherit mime-xdg
