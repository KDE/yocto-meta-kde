# SPDX-FileCopyrightText: 2018 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2022 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "libphonenumber"
HOMEPAGE = "https://github.com/googlei18n/libphonenumber"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=363822a4d0f7a74c43ecdc2a4c11ae64"
PR = "r0"

DEPENDS = " \
    gtest \
    protobuf \
    protobuf-native \
    icu \
    virtual/javac-native \
    abseil-cpp \
"

SRC_URI = " \
    git://github.com/googlei18n/${BPN}.git;nobranch=1;protocol=https \
"
S = "${WORKDIR}/git/cpp"

inherit cmake
EXTRA_OECMAKE += "-DUSE_BOOST=OFF -DBUILD_GEOCODER=OFF -DCMAKE_CXX_STANDARD=17"
OECMAKE_GENERATOR = "Unix Makefiles"
