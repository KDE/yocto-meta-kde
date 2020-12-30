# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Heaptrack"
HOMEPAGE = "https://phabricator.kde.org/source/heaptrack/"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING;md5=4fbd65380cdd255951079008b364516c"
PR = "r0"

DEPENDS = "zlib boost libunwind elfutils"

SRC_URI = "git://invent.kde.org/sdk/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake

EXTRA_OECMAKE += " -DHEAPTRACK_BUILD_GUI=OFF"
