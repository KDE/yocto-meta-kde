# SPDX-FileCopyrightText: 2022 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
SUMMARY = "Qalculate! library and CLI"
HOMEPAGE = "https://qalculate.github.io/"

SRC_URI = " \
    git://github.com/Qalculate/libqalculate.git;nobranch=1;protocol=https \
"

S = "${WORKDIR}/git"

DEPENDS = " \
    gmp \
    mpfr \
    curl \
    icu \
    libxml2 \
    intltool-native \
"

inherit autotools
inherit gettext
inherit pkgconfig

do_configure:prepend() {
    ${S}/autogen.sh ${CONFIGUREOPTS}
}

FILES:${PN} += " \
    ${datadir}/qalculate/rates.json \
    ${datadir}/qalculate/prefixes.xml \
    ${datadir}/qalculate/elements.xml \
    ${datadir}/qalculate/currencies.xml \
    ${datadir}/qalculate/variables.xml \
    ${datadir}/qalculate/eurofxref-daily.xml \
    ${datadir}/qalculate/datasets.xml \
    ${datadir}/qalculate/planets.xml \
    ${datadir}/qalculate/functions.xml \
    ${datadir}/qalculate/units.xml \
"
