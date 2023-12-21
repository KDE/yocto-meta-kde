# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Heaptrack"
HOMEPAGE = "https://invent.kde.org/sdk/heaptrack"
LICENSE = "LGPL-2.1-only"
LIC_FILES_CHKSUM = "file://LICENSES/LGPL-2.1-only.txt;md5=41890f71f740302b785c27661123bff5"
PR = "r0"

DEPENDS = "zlib boost libunwind elfutils"

SRC_URI = "git://invent.kde.org/sdk/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake

EXTRA_OECMAKE += " -DHEAPTRACK_BUILD_GUI=OFF"
