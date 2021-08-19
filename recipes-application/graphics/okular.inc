# SPDX-FileCopyrightText: 2019-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Okular"
HOMEPAGE = "https://okular.kde.org/"
LICENSE = "GPL-2.0+ & GPL-3.0"
LIC_FILES_CHKSUM = " \
    file://LICENSES/GPL-2.0-or-later.txt;md5=9e2385fe012386d34dcc5c9863070881 \
    file://LICENSES/GPL-3.0-or-later.txt;md5=49fc03046e56a282c0c743b5d3a55b7c \
"
PR = "r0"

DEPENDS += " \
    exiv2 \
    kirigami \
    kparts \
    threadweaver \
    kwallet \
    kjs \
    kactivities \
    kpty \
    poppler \
    purpose \
    qca \
"

# dirty hack to force the mobile version and hide the desktop one
do_install_append() {
    sed -i 's/Exec=okular %U$/Exec=okularkirigami %U/g' ${D}${datadir}/applications/org.kde.okular.desktop
}

inherit cmake_kdeapp
inherit kcoreaddons
inherit kconfig
inherit kauth
inherit mime-xdg

EXTRA_OECMAKE += " -DOE_QCA_PATH_HOST_ROOT=${STAGING_DIR_HOST} -DOKULAR_UI=both"

# note: okularkirigami is the dedicated mobile version
PACKAGES += " \
    ${PN}-desktop \
    ${PN}-shared \
"

FILES_${PN} = " \
    ${bindir}/okularkirigami \
    ${datadir}/applications/org.kde.okular.kirigami.desktop \
"

FILES_${PN}-shared = " \
    ${datadir}/okular/pics \
    ${datadir}/okular/icons \
    ${datadir}/qlogging-categories5 \
    ${datadir}/config.kcfg \
    ${datadir}/icons \
    ${datadir}/kconf_update \
    ${datadir}/kservicetypes5 \
    ${datadir}/kservices5 \
    ${datadir}/kxmlgui5 \
    ${datadir}/metainfo \
    ${datadir}/okular \
    ${datadir}/applications/org.kde.mobile.okular_xps.desktop \
    ${datadir}/applications/okularApplication_dvi.desktop \
    ${datadir}/applications/okularApplication_fax.desktop \
    ${datadir}/applications/okularApplication_xps.desktop \
    ${datadir}/applications/okularApplication_fb.desktop \
    ${datadir}/applications/okularApplication_txt.desktop \
    ${datadir}/applications/org.kde.mobile.okular_fax.desktop \
    ${datadir}/applications/org.kde.mobile.okular_fb.desktop \
    ${datadir}/applications/org.kde.mobile.okular_comicbook.desktop \
    ${datadir}/applications/okularApplication_tiff.desktop \
    ${datadir}/applications/org.kde.mobile.okular_txt.desktop \
    ${datadir}/applications/okularApplication_comicbook.desktop \
    ${datadir}/applications/org.kde.mobile.okular_pdf.desktop \
    ${datadir}/applications/okularApplication_plucker.desktop \
    ${datadir}/applications/org.kde.mobile.okular_tiff.desktop \
    ${datadir}/applications/org.kde.mobile.okular_dvi.desktop \
    ${datadir}/applications/org.kde.mobile.okular_plucker.desktop \
    ${datadir}/applications/okularApplication_pdf.desktop \
    ${libdir} \
"

FILES_${PN}-desktop = " \
    ${bindir}/okular \
    ${datadir}/applications/org.kde.okular.desktop \
"

RDEPENDS_${PN} += " \
    ${PN}-shared \
"

RDEPENDS_${PN}-desktop += " \
    ${PN}-shared \
"
