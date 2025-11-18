DESCRIPTION = "Plasma Keyboard"
HOMEPAGE = "https://invent.kde.org/plasma/plasma-keyboard"
LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-3.0-only.txt;md5=1c76c4cc354acaac30ed4d5eefea7245"

DEPENDS = " \
    qtvirtualkeyboard \
    qtwayland-native \
"

FILES:${PN} += " \
    ${datadir}/plasma/keyboard \
    ${libdir}/qml \
"

inherit cmake_plasma
