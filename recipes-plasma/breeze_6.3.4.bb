# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "https://download.kde.org/stable/plasma/6.3.4/breeze-6.3.4.tar.xz"
SRC_URI += " \
    file://0001-kcursorgen-Add-QDebug-include.patch \
    file://0002-Add-missing-includes.patch \
"
SRC_URI[sha256sum] = "97af530e746eaea423f741697f91eb47ae5e8e883bef3d353fb25ad0b5ed15ac"

