# SPDX-FileCopyrightText: 2019-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Kirigami Gallery"
DESCRIPTION = "Kirigami component gallery application"
HOMEPAGE = "https://invent.kde.org/sdk/kirigami-gallery"
LICENSE = "LGPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://LICENSE.LGPL-2;md5=5f30f0716dfdd0d91eb439ebec522ec2"
PR = "r0"

DEPENDS += "kirigami \
            kitemmodels \
"

inherit cmake_kdeapp
