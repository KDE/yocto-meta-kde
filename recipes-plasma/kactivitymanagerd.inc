# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Activity manager service"
DESCRIPTION = "System service to manage user's activities, track the usage patterns etc."
HOMEPAGE = "https://invent.kde.org/plasma/kactivitymanagerd"
LICENSE = "GPL-2.0-only"

DEPENDS += "boost \
            kconfig \
            kcoreaddons \
            kdbusaddons \
            kglobalaccel \
            kio \
            kwindowsystem \
            kxmlgui \
"

inherit cmake_plasma
inherit reuse_license_checksums

CXXFLAGS += "-DBOOST_DISABLE_ASSERTS"

# the cmake checks for those use try_run(), which fails when cross-compiling
EXTRA_OECMAKE += "-DHAVE_CXX11_AUTO=ON \
                  -DHAVE_CXX11_NULLPTR=ON \
                  -DHAVE_CXX11_LAMBDA=ON \
                  -DHAVE_CXX11_OVERRIDE=ON \
                  -DHAVE_CXX11_UNIQUE_PTR=ON \
                  -DHAVE_CXX11_VARIADIC_TEMPLATES=ON \
                  -DHAVE_CXX11_INITIALIZER_LISTS=ON \
"

FILES:${PN} += "${libdir}/libkactivitymanagerd_plugin.so \
                ${datadir}/krunner/dbusplugins/plasma-runnners-activities.desktop \
"

FILES:${PN}-dev += "${datadir}/qlogging-categories6"

# Do not package /usr/lib/libkactivitymanagerd_plugin.so in -dev package.
FILES_SOLIBSDEV = ""
