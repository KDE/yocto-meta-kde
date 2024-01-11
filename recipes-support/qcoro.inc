# SPDX-FileCopyrightText: 2021-2022 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "QCoro"
HOMEPAGE = "https://github.com/danvratil/qcoro"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSES/MIT.txt;md5=387248cdf922178ee3fdc379e28542dc"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    qttools \
    qttools-native \
"

SRC_URI = "git://github.com/danvratil/qcoro.git;nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit qt6-cmake

EXTRA_OECMAKE += " \
    -DQCORO_WITH_QTWEBSOCKETS=OFF \
    -DCMAKE_POSITION_INDEPENDENT_CODE=ON \
"

FILES:${PN}-dev += " \
    ${prefix}/mkspecs \
"
