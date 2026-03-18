# SPDX-FileCopyrightText: 2019-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Okular"
DESCRIPTION = "KDE document viewer"
HOMEPAGE = "https://invent.kde.org/graphics/okular"
LICENSE = "GPL-2.0-or-later & GPL-3.0-only"

inherit cmake_kdeapp
inherit kf6-kcoreaddons
inherit kf6-kconfig
inherit kf6-kauth
inherit mime-xdg
inherit reuse_license_checksums

DEPENDS += "kirigami \
            kparts \
            kpty \
            kwallet \
            libkexiv2 \
            libzip \
            phonon \
            plasma-activities \
            poppler \
            purpose \
            qca \
            threadweaver \
"

EXTRA_OECMAKE += "-DOKULAR_UI=both"
EXTRA_OECMAKE += "-DFORCE_NOT_REQUIRED_DEPENDENCIES='KExiv2Qt6;LibSpectre;DjVuLibre;EPub;Discount'"

# dirty hack to force the mobile version and hide the desktop one
do_install:append() {
    sed -i 's/Exec=okular %U$/Exec=okularkirigami %U/g' ${D}${datadir}/applications/org.kde.okular.desktop
    sed -i 's/Exec=okular %U$/Exec=okularkirigami %U/g' ${D}${datadir}/applications/okularApplication_*.desktop
}

# note: okularkirigami is the dedicated mobile version
PACKAGES =+ "${PN}-desktop \
             ${PN}-shared \
"

FILES:${PN} += "${bindir}/okularkirigami \
                ${datadir}/applications/org.kde.okular.kirigami.desktop \
"

INSANE_SKIP:${PN}-shared = "dev-so"
FILES:${PN}-shared += "${sysconfdir}/xdg/okular.categories \
                       ${datadir}/okular/pics \
                       ${datadir}/okular/icons \
                       ${datadir}/config.kcfg \
                       ${datadir}/icons \
                       ${datadir}/kconf_update \
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
                       ${datadir}/applications/org.kde.mobile.okular_kimgio.desktop \
                       ${datadir}/applications/okularApplication_kimgio.desktop \
                       ${libdir} \
"

FILES:${PN}-desktop += "${bindir}/okular \
                        ${datadir}/applications/org.kde.okular.desktop \
"

RDEPENDS:${PN} += "${PN}-shared \
                   kirigami-addons \
"

RDEPENDS:${PN}-desktop += "${PN}-shared"
