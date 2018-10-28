DESCRIPTION = "libphonenumber"
HOMEPAGE = "https://github.com/googlei18n/libphonenumber"
LICENSE = "Apache-2"
LIC_FILES_CHKSUM = "file://LICENSE;md5=5c213a7de3f013310bd272cdb6eb7a24"
PR = "r0"

DEPENDS = " \
    gtest \
    protobuf \
    protobuf-native \
    icu \
    virtual/java-native \
"

SRC_URI = " \
    git://github.com/googlei18n/${BPN}.git;nobranch=1 \
"
S = "${WORKDIR}/git/cpp"

inherit cmake
EXTRA_OECMAKE += "-DUSE_BOOST=OFF -DBUILD_GEOCODER=OFF"
OECMAKE_GENERATOR = "Unix Makefiles"
