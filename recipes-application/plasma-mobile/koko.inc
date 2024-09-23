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

SRC_URI[cities1000.sha256sum] = "9bbcb6afac88aad44b2193536af1dee85ded7401096727e0a4b91e794ef1f562"
SRC_URI[admin1Codes.sha256sum] = "e127215f6a359887a7975faba1d7657f684a5edacc76f84cc7960400b72cbea1"
SRC_URI[admin2Codes.sha256sum] = "f961cc6f82383a9e2ac370713bd02e4e5bf0dd21779f4483fa4ab47e30a7ce2d"

# To build Koko, it is required to import a few files from outside
# this repository. These files are licensed under the CC-BY-4.0 and
# are maintained by the GeoNames project. These files need to be
# copied to the src directory. CMake will take care of the rest.
do_configure:prepend() {
    cp ${WORKDIR}/${KOKO_CITIES1000} ${S}/src
    cp ${WORKDIR}/${KOKO_ADMIN1CODES} ${S}/src
    cp ${WORKDIR}/${KOKO_ADMIN2CODES} ${S}/src
}
