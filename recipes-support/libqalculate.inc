# SPDX-FileCopyrightText: 2022 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "GPL-2.0"
LIC_FILES_CHKSUM = "file://COPYING;md5=94d55d512a9ba36caa9b7df079bae19f"
SUMMARY = "Qalculate! library and CLI"
HOMEPAGE = "https://qalculate.github.io/"

SRC_URI = " \
    git://github.com/Qalculate/libqalculate.git;nobranch=1 \
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
