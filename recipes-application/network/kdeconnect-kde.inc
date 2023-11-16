# SPDX-FileCopyrightText: 2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KDE Connect"
HOMEPAGE = "https://community.kde.org/KDEConnect"
LICENSE = "GPL-2.0"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-or-later.txt;md5=fed54355545ffd980b814dab4a3b312c"
PR = "r0"

DEPENDS += " \
    qtdeclarative \
    qtmultimedia \
    qtwayland-native \
    qca \
    libfakekey \
    kconfigwidgets \
    kdbusaddons \
    kiconthemes \
    knotifications \
    kio \
    kirigami \
    kirigami-addons \
    kpeople \
    kpeoplevcard \
    kwayland \
    pulseaudio-qt \
    qqc2-desktop-style \
    kstatusnotifieritem \
"

inherit cmake_kdeapp
inherit kf6-kcoreaddons
inherit kf6-kconfig
inherit kf6-kauth
inherit mime-xdg
inherit kf6-kcmutils

EXTRA_OECMAKE += "-DEXPERIMENTALAPP_ENABLED=ON"
EXTRA_OECMAKE += "-DSMSAPP_ENABLED=OFF"
# workaround for missing variable, which is only used for Windows builds
EXTRA_OECMAKE += "-DCMAKE_SYSTEM_VERSION=0.0.0"

FILES:${PN} += " \
    ${datadir}/Thunar \
    ${datadir}/contractor \
    ${datadir}/kdeconnect \
    ${datadir}/deepin \
    ${datadir}/nautilus-python \
    ${datadir}/plasma \
    ${datadir}/zsh \
    ${libdir}/plugins/plasma/kcms/systemsettings_qwidgets/kcm_kdeconnect.so \
"

RDEPENDS:${PN} += " \
    kpeoplevcard \
"
