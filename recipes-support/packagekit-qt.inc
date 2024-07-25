# SPDX-FileCopyrightText: 2024 Marc Ferland <marc.ferland@sonatest.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "PackageKit-Qt"
DESCRIPTION = "Qt bindings for PackageKit"
HOMEPAGE = "https://github.com/PackageKit/PackageKit-Qt"
LICENSE = "LGPL-2.1-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=4fbd65380cdd255951079008b364516c"
PR = "r0"

DEPENDS = " \
    qtbase \
    packagekit \
"

RDEPENDS:${PN} += "qtbase"

inherit qt6-cmake xmlcatalog

EXTRA_OECMAKE += " \
    -DBUILD_WITH_QT6=ON \
"
