# SPDX-FileCopyrightText: 2019 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "super simple sans display display desktop manager mockup mitigating mir"
HOMEPAGE = "https://github.com/bhush9/simplelogin"
LICENSE = "GPL-2.0+"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4641e94ec96f98fabc56ff9cc48be14b"

DEPENDS = " \
    qtbase \
    libpam \
"

SRC_URI = " \
    git://invent.kde.org/bshah/${BPN}.git;nobranch=1;protocol=https \
"
S = "${WORKDIR}/git"

inherit cmake_qt5
inherit systemd

SYSTEMD_SERVICE:${PN} = "${BPN}.service"
