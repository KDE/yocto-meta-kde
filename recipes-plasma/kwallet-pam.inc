# SPDX-FileCopyrightText: 2024 Marc Ferland <marc.ferland@sonatest.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KWallet PAM Integratioon"
DESCRIPTION = "PAM Integration with KWallet - Unlock KWallet when you login"
HOMEPAGE = "https://invent.kde.org/plasma/kwallet-pam"
LICENSE = "BSD-3-Clause & LGPL-2.1-or-later"
PR = "r0"

DEPENDS += "kwallet \
            libgcrypt \
            libpam \
"

FILES:${PN} += "${libdir}/security/pam_kwallet5.so"

RDEPENDS:${PN} += "socat"

inherit cmake_plasma
inherit systemd
inherit reuse_license_checksums

EXTRA_OECMAKE += "-DKWALLETD_BIN_PATH=${bindir}/ksecretd"

SYSTEMD_SERVICE:${PN} = "plasma-kwallet-pam.service"
SYSTEMD_AUTO_ENABLE:${PN} = "disable"
