# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KDE CLI tools"
DESCRIPTION = "Tools based on KDE Frameworks 5 to better interact with the system"
HOMEPAGE = "https://invent.kde.org/plasma/kde-cli-tools"
LICENSE = "GPL-2.0-or-later & LGPL-2.0-or-later & (LGPL-2.1-only | LGPL-3.0-only | LicenseRef-KDE-Accepted-LGPL) & (GPL-2.0-only | GPL-3.0-only | LicenseRef-KDE-Accepted-GPL) & LGPL-2.0-only & Artistic-2.0"
PR = "r0"

DEPENDS += "kcmutils \
            kconfig \
            kdesu \
            kiconthemes \
            kio \
            kservice \
            kwindowsystem \
            plasma-activities \
            plasma-workspace \
            qtsvg \
"

inherit cmake_plasma
inherit mime-xdg
inherit reuse_license_checksums

FILES:${PN} += "${libdir}/plugins/plasma/kcms/systemsettings_qwidgets/kcm_filetypes.so \
                ${datadir}/zsh/site-functions/_kde-inhibit \
"

FILES_SOLIBSDEV = ""
