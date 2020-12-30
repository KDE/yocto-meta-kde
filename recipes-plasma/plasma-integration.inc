# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma Integration"
HOMEPAGE = ""
LICENSE = "LGPLv3"
LIC_FILES_CHKSUM = "file://COPYING.LGPL-3;md5=e6a600fd5e1d9cbde2d983680233ad02"
PR = "r0"

DEPENDS = " \
    qtx11extras \
    qtquickcontrols2 \
    kconfig \
    kconfigwidgets \
    kiconthemes \
    kio \
    knotifications \
    kwayland \
    kwidgetsaddons \
    kwindowsystem \
    breeze \
    libxcursor \
"

SRC_URI = "git://invent.kde.org/plasma/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_plasma

RDEPENDS_${PN} += "perl \
                   qtquickcontrols \
                  "
