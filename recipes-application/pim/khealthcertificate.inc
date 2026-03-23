# SPDX-FileCopyrightText: 2026 Marc Ferland <marc.ferland@gmail.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KHealthCertificate"
DESCRIPTION = "Handling of digital vaccination, test and recovery certificates"
HOMEPAGE = "https://invent.kde.org/pim/khealthcertificate"
LICENSE = "Apache-2.0 & BSD-3-Clause & LGPL-2.0-or-later & MIT"

DEPENDS += "kcodecs"

inherit cmake_kdeapp
inherit reuse_license_checksums
