# SPDX-FileCopyrightText: 2020 Volker Krause <vkrause@kde.org>
# SPDX-License-Identifier: MIT

FILESEXTRAPATHS_prepend := "${THISDIR}/${BPN}:"
SRC_URI += " \
    file://0001-pkg-config-consider-sysroot-for-protocol-files.patch \
"
