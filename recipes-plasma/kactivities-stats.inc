# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

REUSE_LICENSECHECK_WHITELIST = "Qt-LGPL-exception-1.1 LicenseRef-Qt-Commercial"
LICENSE = "LGPL-2.0-or-later & (LGPL-2.1-only | LGPL-3.0-only | LicenseRef-KDE-Accepted-LGPL) & (GPL-2.0-only | GPL-3.0-only | LicenseRef-KDE-Accepted-GPL)"
PR = "r0"

PROVIDES += "kactivitiesstats"

DEPENDS = " \
    qtbase \
    kconfig \
    kactivities \
    kcoreaddons-native \
    kconfig-native \
    kauth-native \
    boost \
"

require kactivities-stats_metainfo.inc
inherit kf6-cmake
inherit reuse_license_checksums
