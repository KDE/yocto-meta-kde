# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KActivity Manager Daemon"
HOMEPAGE = ""
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-only.txt;md5=93e64b4a83c7e441e48bbdeeea05c977"
PR = "r0"

DEPENDS = " \
    boost \
    kconfig \
    kcoreaddons \
    kdbusaddons \
    kglobalaccel \
    kio \
    kwindowsystem \
    kxmlgui \
"

SRC_URI = "git://invent.kde.org/plasma/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_plasma

CXXFLAGS += "-DBOOST_DISABLE_ASSERTS"

# the cmake checks for those use try_run(), which fails when cross-compiling
EXTRA_OECMAKE += " \
    -DHAVE_CXX11_AUTO=ON \
    -DHAVE_CXX11_NULLPTR=ON \
    -DHAVE_CXX11_LAMBDA=ON \
    -DHAVE_CXX11_OVERRIDE=ON \
    -DHAVE_CXX11_UNIQUE_PTR=ON \
    -DHAVE_CXX11_VARIADIC_TEMPLATES=ON \
    -DHAVE_CXX11_INITIALIZER_LISTS=ON \
"

FILES_${PN} += " \
    ${libdir}/*.so \
"

FILES_${PN}-dev = " \
    ${datadir}/qlogging-categories5 \
"
