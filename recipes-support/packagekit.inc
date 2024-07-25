# SPDX-FileCopyrightText: 2024 Marc Ferland <marc.ferland@sonatest.com>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "PackageKit"
SUMMARY = "PackageKit package management abstraction"
HOMEPAGE = "https://www.freedesktop.org/software/PackageKit/"
LICENSE = "LGPL-2.1-or-later"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"

DEPENDS = " \
    glib-2.0 \
    glib-2.0-native \
    gobject-introspection-native \
    gobject-introspection \
    sqlite3 \
    polkit \
    libxslt-native \
    docbook-xml-dtd4 \
"

EXTRA_OEMESON = " \
    -Dgstreamer_plugin=false \
    -Dgtk_module=false \
    -Dbash_command_not_found=false \
    -Dbash_completion=false \
    -Dcron=false \
    -Dman_pages=false \
    -Doffline_update=false \
    -Dpython_backend=false \
"

inherit meson pkgconfig gettext vala systemd

SYSTEMD_SERVICE:${PN} = "${BPN}.service"
SYSTEMD_AUTO_ENABLE = "disable"

FILES:${PN} += " \
    ${datadir} \
    ${libdir}/packagekit-backend \
    ${libdir}/girepository-1.0 \
"
