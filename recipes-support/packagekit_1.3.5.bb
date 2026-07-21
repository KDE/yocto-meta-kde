# SPDX-FileCopyrightText: 2024 Marc Ferland <marc.ferland@sonatest.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "PackageKit"
DESCRIPTION = "PackageKit package management abstraction"
HOMEPAGE = "https://www.freedesktop.org/software/PackageKit/"
LICENSE = "LGPL-2.1-or-later"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"

DEPENDS += "docbook-xml-dtd4 \
            glib-2.0 \
            glib-2.0-native \
            gobject-introspection \
            gobject-introspection-native \
            jansson \
            libxslt-native \
            polkit \
            sqlite3 \
"

SRC_URI = "https://www.freedesktop.org/software/PackageKit/releases/PackageKit-${PV}.tar.xz"
SRC_URI[sha256sum] = "ea9e5954bc74b24c02cf31674a3ec792b3b74d5758ac0b6aca58ad76fc54374e"
S = "${UNPACKDIR}/PackageKit-${PV}"

EXTRA_OEMESON = "-Dgstreamer_plugin=false \
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

FILES:${PN} += "${datadir} \
                ${libdir}/packagekit-backend \
                ${libdir}/girepository-1.0 \
"

# nooelint: oelint.vars.insaneskip - https://github.com/PackageKit/PackageKit/issues/953
INSANE_SKIP:${PN} += "buildpaths"
