# SPDX-FileCopyrightText: 2025 Marc Ferland <marc.ferland@sonatest.com>
#
# SPDX-License-Identifier: MIT

SUMMARY = "ddcutil"
DESCRIPTION = "Control monitor settings using DDC/CI and USB"
HOMEPAGE = "https://github.com/rockowitz/ddcutil"
SECTION = "libs"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"

DEPENDS += "glib-2.0 i2c-tools jansson kmod"
PV = "2.2.7"

SRC_URI = "git://github.com/rockowitz/ddcutil.git;protocol=https;branch=master"
SRCREV = "4edf054c6bfddcc62174bbc453e26c73cfbe7bbf"

inherit autotools pkgconfig

CFLAGS += "-Wno-unused-but-set-variable"

PACKAGECONFIG ??= "${@bb.utils.filter('DISTRO_FEATURES', 'x11 systemd', d)} drm dbus"

PACKAGECONFIG[drm] = "--enable-drm=yes,--enable-drm=no,libdrm"
PACKAGECONFIG[systemd] = "--enable-udev=yes,--enable-udev=no,udev"
PACKAGECONFIG[usb] = "--enable-usb=yes,--enable-usb=no,libusb1"
PACKAGECONFIG[x11] = "--enable-x11=yes,--enable-x11=no,libx11 xrandr"
PACKAGECONFIG[dbus] = "--enable-dbus=yes,--enable-dbus=no,dbus"

EXTRA_OECONF += "--enable-build-timestamp=no"

do_install:append () {
    install -d ${D}${sysconfdir}/udev/rules.d
    cp -rf ${D}${datadir}/ddcutil/data/* ${D}${sysconfdir}/udev/rules.d
}

FILES:${PN} += "${libdir}/modules-load.d/ddcutil.conf"
