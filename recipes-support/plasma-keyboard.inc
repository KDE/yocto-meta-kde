DESCRIPTION = "Plasma Keyboard"
HOMEPAGE = "https://invent.kde.org/plasma/plasma-keyboard"
LICENSE = "BSD-2-Clause & BSD-3-Clause & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & GPL-3.0-or-later & LGPL-2.1-only & LGPL-3.0-only & LicenseRef-KDE-Accepted-GPL"

DEPENDS = " \
    qtvirtualkeyboard \
    qtwayland-native \
"

FILES:${PN} += " \
    ${datadir}/plasma/keyboard \
    ${libdir}/qml \
"

inherit cmake_plasma
inherit reuse_license_checksums
