SUMMARY = "Hack Font"
DESCRIPTION = "A typeface designed for source code"
HOMEPAGE = "https://sourcefoundry.org/hack/"
LICENSE = "MIT & Bitstream-Vera"
LIC_FILES_CHKSUM = " \
    file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302 \
    file://${COMMON_LICENSE_DIR}/Bitstream-Vera;md5=8c4328074cf50f27d3efb9aae5a87f4a \
"

inherit allarch fontcache

SRC_URI = "https://github.com/source-foundry/Hack/releases/download/v${PV}/Hack-v${PV}-ttf.tar.gz"
SRC_URI[sha256sum] = "7f592d091cbd2472f39af96e6c280cde3c27cab50a9c88746feb42918aa1888f"
S = "${WORKDIR}/sources-unpack"
UNPACKDIR = "${S}"

do_install:append() {
    install -d ${D}${datadir}/fonts/truetype/
    find ${S} -name 'Hack*.ttf' -exec install -m 0644 {} ${D}${datadir}/fonts/truetype/ \;
}

FILES:${PN} += "${datadir}/fonts/truetype"
