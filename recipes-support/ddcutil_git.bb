SUMMARY = "ddcutil"
DESCRIPTION = "Control monitor settings using DDC/CI and USB"
HOMEPAGE = "https://github.com/rockowitz/ddcutil"
SECTION = "libs"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"

DEPENDS += "glib-2.0 i2c-tools jansson kmod"
PV = "2.2.3"

SRC_URI = "git://github.com/rockowitz/ddcutil.git;protocol=https;branch=master"
SRCREV = "8660f29c0370ca093d45ea6c91277edd00d51301"

S = "${WORKDIR}/git"

inherit autotools pkgconfig

CFLAGS += "-Wno-unused-but-set-variable"

PACKAGECONFIG ??= "${@bb.utils.filter('DISTRO_FEATURES', 'x11 systemd', d)} drm"

PACKAGECONFIG[drm] = "--enable-drm=yes,--enable-drm=no,libdrm"
PACKAGECONFIG[systemd] = "--enable-udev=yes,--enable-udev=no,udev"
PACKAGECONFIG[usb] = "--enable-usb=yes,--enable-usb=no,libusb1"
PACKAGECONFIG[x11] = "--enable-x11=yes,--enable-x11=no,libx11 xrandr"

EXTRA_OECONF += "--enable-build-timestamp=no"

do_install:append () {
    install -d ${D}${sysconfdir}/udev/rules.d
    cp -rf ${D}${datadir}/ddcutil/data/* ${D}${sysconfdir}/udev/rules.d
}

FILES:${PN} += "${libdir}/modules-load.d/ddcutil.conf"
