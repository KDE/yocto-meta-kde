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

SRC_URI += "http://download.geonames.org/export/dump/${KOKO_CITIES1000};name=cities1000;unpack=0 \
http://download.geonames.org/export/dump/${KOKO_ADMIN1CODES};name=admin1Codes \
http://download.geonames.org/export/dump/${KOKO_ADMIN2CODES};name=admin2Codes \
file://0001-Fix-org.kde.kquickimageeditor-dependency.patch \
"

SRC_URI[cities1000.sha256sum] = "9fff9632d97a9ec05beddcf8764be6df43b16dfa2625bd4fe1bb3dc39cbe15a7"
SRC_URI[admin1Codes.sha256sum] = "499a7be16c4e91ebac33850c1af1d7baa1d055d5b95e6256f45e4bf2899b0987"
SRC_URI[admin2Codes.sha256sum] = "08cd19d53ee962b060710e35ed6e753c180c4260acb5ffe13c8e2feacde94432"

# To build Koko, it is required to import a few files from outside
# this repository. These files are licensed under the CC-BY-4.0 and
# are maintained by the GeoNames project. These files need to be
# copied to the src directory. CMake will take care of the rest.
do_configure:prepend() {
    cp ${WORKDIR}/${KOKO_CITIES1000} ${S}/src
    cp ${WORKDIR}/${KOKO_ADMIN1CODES} ${S}/src
    cp ${WORKDIR}/${KOKO_ADMIN2CODES} ${S}/src
}
