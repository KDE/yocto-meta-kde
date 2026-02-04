# SPDX-FileCopyrightText: 2026 Marc Ferland <marc.ferland@sonatest.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "FFmpeg Thumbnailer"
DESCRIPTION = "FFmpeg-based thumbnail creator for video files"
HOMEPAGE = "https://invent.kde.org/multimedia/ffmpegthumbs"
LICENSE = " \
    BSD-3-Clause & \
    GPL-2.0-or-later"

DEPENDS += " \
    ffmpeg \
    kio \
"

inherit cmake_kdeapp
inherit kf6-kconfig
inherit reuse_license_checksums
