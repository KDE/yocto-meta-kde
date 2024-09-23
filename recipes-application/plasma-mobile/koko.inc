# SPDX-FileCopyrightText: 2019-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KoKo Gallery Application"
HOMEPAGE = "https://invent.kde.org/graphics/koko/-"
LICENSE = "LGPL-2.1-only"
LIC_FILES_CHKSUM = "file://LICENSES/LGPL-2.1-only.txt;md5=fabba2a3bfeb22a6483d44e9ae824d3f"
PR = "r0"

DEPENDS = " \
    qtlocation \
    kdeclarative \
    kiconthemes \
    kio \
    kirigami \
    kfilemetadata \
    knotifications \
    kquickimageeditor \
    exiv2 \
"

inherit cmake_kdeapp
inherit kf6-kconfig
inherit kf6-kcoreaddons
inherit kf6-kauth
inherit mime-xdg

RDEPENDS:${PN} += " \
    qtdeclarative-qmlplugins \
    purpose \
    kirigami \
"

KOKO_CITIES1000="cities1000.zip"
KOKO_ADMIN1CODES="admin1CodesASCII.txt"
KOKO_ADMIN2CODES="admin2Codes.txt"

SRC_URI:append = " http://download.geonames.org/export/dump/${KOKO_CITIES1000};name=cities1000;unpack=0 \
http://download.geonames.org/export/dump/${KOKO_ADMIN1CODES};name=admin1Codes \
http://download.geonames.org/export/dump/${KOKO_ADMIN2CODES};name=admin2Codes \
"

SRC_URI[cities1000.sha256sum] = "9a355b83ab7d6e188e5e3f32d2ae0324100cb94822ca2b972a02ca0e3279b590"
SRC_URI[admin1Codes.sha256sum] = "4fd9666062869d462f6beaebdc35467601b05becc48d5914a333bfa9e584bb24"
SRC_URI[admin2Codes.sha256sum] = "e7f41100cdd4154bf8e1217e5200c65e9386fb92adf8662a8117845c347908c3"

# To build Koko, it is required to import a few files from outside
# this repository. These files are licensed under the CC-BY-4.0 and
# are maintained by the GeoNames project. These files need to be
# copied to the src directory. CMake will take care of the rest.
do_configure:prepend() {
    cp ${WORKDIR}/${KOKO_CITIES1000} ${S}/src
    cp ${WORKDIR}/${KOKO_ADMIN1CODES} ${S}/src
    cp ${WORKDIR}/${KOKO_ADMIN2CODES} ${S}/src
}
