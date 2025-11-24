# SPDX-FileCopyrightText: 2025 Marc Ferland <marc.ferland@sonatest.com>
#
# SPDX-License-Identifier: MIT

SUMMARY="Freedesktop Sound Theme"
HOMEPAGE="https://www.freedesktop.org/wiki/Specifications/sound-theme-spec/"
LICENSE="CC-BY-SA-3.0 & CC-BY-3.0 & CC-BY-4.0 & GPL-2.0-only & GPL-2.0-or-later & LGPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://CREDITS;md5=3213e601ce34bb42ddc3498903ac4e69"

inherit autotools

DEPENDS += " \
    glib-2.0-native \
    intltool-native \
"
