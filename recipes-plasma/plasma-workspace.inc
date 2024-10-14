# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020-2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma Workspace"
HOMEPAGE = ""
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-only.txt;md5=9e2385fe012386d34dcc5c9863070881"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    qtwayland-native \
    qtpositioning \
    \
    kcoreaddons \
    kcrash \
    kdbusaddons \
    kholidays \
    kidletime \
    kitemmodels \
    knewstuff \
    knotifications \
    kpackage \
    kpeople \
    kquickcharts \
    krunner \
    kstatusnotifieritem \
    ksvg \
    ktexteditor \
    kunitconversion \
    kuserfeedback \
    kwallet \
    kwallet \
    networkmanager-qt \
    plasma5support \
    prison \
    solid \
    \
    baloo \
    breeze \
    kded \
    kdesu \
    kpipewire \
    kscreenlocker \
    kwayland \
    kwin \
    libkscreen \
    libksysguard \
    libplasma \
    plasma-activities \
    plasma-activities-stats \
    \
    knotifyconfig \
    libqalculate \
    libxft \
    phonon \
    qcoro \
"

inherit cmake_plasma
inherit mime-xdg
inherit systemd

EXTRA_OECMAKE += " -DBUILD_xembed-sni-proxy=OFF -DINSTALL_SDDM_WAYLAND_SESSION=ON"

FILES_SOLIBSDEV = ""
FILES:${PN} += " \
    ${datadir}/desktop-directories/*.directory \
    ${datadir}/kcontrol \
    ${datadir}/kdisplay \
    ${datadir}/kfontinst \
    ${datadir}/kglobalaccel \
    ${datadir}/kio/servicemenus \
    ${datadir}/kio_desktop \
    ${datadir}/konqsidebartng \
    ${datadir}/kpackage \
    ${datadir}/krunner \
    ${datadir}/kservices6 \
    ${datadir}/ksmserver/themes \
    ${datadir}/ksplash/Themes \
    ${datadir}/kstyle/themes/*.themerc \
    ${datadir}/kxmlgui5/kfontview/* \
    ${datadir}/plasma/avatars \
    ${datadir}/plasma/look-and-feel \
    ${datadir}/plasma/nightcolor \
    ${datadir}/plasma/plasmoids \
    ${datadir}/plasma/services/*.operations \
    ${datadir}/plasma/shareprovider \
    ${datadir}/plasma/wallpapers \
    ${datadir}/plasma/weather \
    ${datadir}/plasma5support/services/* \
    ${datadir}/sddm/themes \
    ${datadir}/solid/actions/*.desktop \
    ${datadir}/wayland-sessions/*.desktop \
    ${datadir}/xdg-desktop-portal/* \
    ${datadir}/xsessions/*.desktop \
    ${datadir}/zsh/site-functions/* \
    ${libdir}/libkrdb.so \
    ${libdir}/libkworkspace6.so \
    ${libdir}/plugins/kf6/krunner/kcms/kcm_krunner_kill.so \
    ${libdir}/plugins/plasma/kcms/systemsettings/*.so \
    ${libdir}/plugins/plasma/kcms/systemsettings_qwidgets/kcm_fontinst.so \
    ${libdir}/plugins/plasmacalendarplugins \
    ${libdir}/qml/org/kde \
"

FILES:${PN}-dev += " \
    ${libdir}/libbatterycontrol.so \
    ${libdir}/libcolorcorrect.so \
    ${libdir}/libkfontinst.so \
    ${libdir}/libkfontinstui.so \
    ${libdir}/libklipper.so \
    ${libdir}/libkmpris.so \
    ${libdir}/libkworkspace5.so \
    ${libdir}/libnotificationmanager.so \
    ${libdir}/libplasma-geolocation-interface.so \
    ${libdir}/libtaskmanager.so \
    ${libdir}/libweather_ion.so \
"

INSANE_SKIP:${PN} = "dev-so"

RDEPENDS:${PN} += " \
    kquickcharts \
    milou \
    ocean-sound-theme \
    xprop \
    xset \
    qttools-tools \
"

do_install:append() {
    sed -i 's:${RECIPE_SYSROOT_NATIVE}::g' ${D}${systemd_user_unitdir}/plasma-ksplash-ready.service
    sed -i 's:${RECIPE_SYSROOT_NATIVE}::g' ${D}${systemd_user_unitdir}/plasma-kcminit-phase1.service
    sed -i 's:${RECIPE_SYSROOT_NATIVE}::g' ${D}${systemd_user_unitdir}/plasma-restoresession.service
}
