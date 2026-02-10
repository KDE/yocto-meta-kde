# SPDX-FileCopyrightText: 2024 Maxime Roussin-Bélanger <maxime.roussinbelanger@gmail.com>
#
# SPDX-License-Identifier: MIT

LICENSE = "(LGPL-2.0-only | LGPL-2.0-or-later | LGPL-2.1-only | LGPL-3.0-or-later | LicenseRef-KDE-Accepted-LGPL) & (GPL-2.0-only | GPL-2.0-or-later | GPL-3.0-only | LicenseRef-KDE-Accepted-GPL)"
PR = "r0"

inherit kf6-cmake
inherit kf6-kdoctools
inherit kf6-kconfig
inherit mime-xdg
inherit reuse_license_checksums

DEPENDS = " \
    futuresql \
    kirigami-addons \
    purpose \
    qcoro \
    qqc2-desktop-style \
    qtwebengine \
"

FILES:${PN} += " \
    ${datadir}/* \
"
