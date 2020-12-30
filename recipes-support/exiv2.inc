# SPDX-FileCopyrightText: 2019 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=625f055f41728f84a8d7938acc35bdc2"

SRC_URI = " \
    git://github.com/Exiv2/${BPN}.git;nobranch=1 \
"
S = "${WORKDIR}/git"

DEPENDS += " \
    expat \
    zlib \
"

inherit cmake gettext
