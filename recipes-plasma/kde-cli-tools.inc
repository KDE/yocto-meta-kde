# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KDE Cli Tools"
HOMEPAGE = ""
LICENSE = "GPL-2.0+ & LGPL-2.0+ & (LGPL-2.1 | LGPL-3.0 | LicenseRef-KDE-Accepted-LGPL) & (GPL-2.0 | GPL-3.0 | LicenseRef-KDE-Accepted-GPL) & LGPL-2.0 & Artistic-2.0"
LIC_FILES_CHKSUM = " \
    file://LICENSES/Artistic-2.0.txt;md5=7f086b1df814d268c59965d8db41f13c \
    file://LICENSES/GPL-2.0-only.txt;md5=9e2385fe012386d34dcc5c9863070881 \
    file://LICENSES/GPL-2.0-or-later.txt;md5=9e2385fe012386d34dcc5c9863070881 \
    file://LICENSES/GPL-3.0-only.txt;md5=49fc03046e56a282c0c743b5d3a55b7c \
    file://LICENSES/LGPL-2.0-only.txt;md5=da48810c4ddf8e49efa031294a26b98c \
    file://LICENSES/LGPL-2.0-or-later.txt;md5=da48810c4ddf8e49efa031294a26b98c \
    file://LICENSES/LGPL-2.1-only.txt;md5=147a320ed8b16b036829a0c71d424153 \
    file://LICENSES/LGPL-3.0-only.txt;md5=8d51f5b5fd447f7a1040c3dc9f0a8de6 \
    file://LICENSES/LicenseRef-KDE-Accepted-GPL.txt;md5=b4c280013bbbadfbe92219498dc5228c \
    file://LICENSES/LicenseRef-KDE-Accepted-LGPL.txt;md5=e4b79a181b6483b37d39a27f4d75e60a \
"
PR = "r0"

DEPENDS = " \
    qtsvg \
    kconfig \
    kiconthemes \
    kinit \
    kcmutils \
    kio \
    kservice \
    kwindowsystem \
    kactivities \
    kdesu \
    \
    plasma-workspace \
"

inherit cmake_plasma
inherit kdoctools

FILES_SOLIBSDEV = ""
