# SPDX-FileCopyrightText: 2021-2023 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Add-ons for the Kirigami framework"
HOMEPAGE = "https://invent.kde.org/libraries/kirigami-addons"
LICENSE = "LGPL-2.1-or-later & BSD-2-Clause"
LIC_FILES_CHKSUM = " \
    file://LICENSES/LGPL-2.1-or-later.txt;md5=41890f71f740302b785c27661123bff5 \
    file://LICENSES/BSD-2-Clause.txt;md5=534956ece1a160a65f088a8f82672ef9 \
"
PR = "r0"

DEPENDS = " \
    kirigami \
    ki18n \
    qt5compat \
    qtdeclarative \
    plasma-activities \
"

SRC_URI = "git://invent.kde.org/libraries/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kdeapp
