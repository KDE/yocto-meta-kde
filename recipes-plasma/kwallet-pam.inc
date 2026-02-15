# SPDX-FileCopyrightText: 2024 Marc Ferland <marc.ferland@sonatest.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KWallet PAM Integration"
HOMEPAGE = "https://invent.kde.org/plasma/kwallet-pam"
LICENSE = "BSD-3-Clause & LGPL-2.1-or-later"
LIC_FILES_CHKSUM = " \
    file://LICENSES/LGPL-2.1-or-later.txt;md5=147a320ed8b16b036829a0c71d424153 \
    file://LICENSES/BSD-3-Clause.txt;md5=954f4d71a37096249f837652a7f586c0 \
"
PR = "r0"

DEPENDS = " \
    libpam \
    libgcrypt \
    kwallet \
"

RDEPENDS:${PN} += "socat"

inherit cmake_plasma systemd

EXTRA_OECMAKE += " \
    -DKWALLETD_BIN_PATH=/usr/bin/ksecretd \
"

FILES:${PN} += "${libdir}/security/pam_kwallet5.so"

SYSTEMD_SERVICE:${PN} = "plasma-kwallet-pam.service"
SYSTEMD_AUTO_ENABLE:${PN} = "disable"
