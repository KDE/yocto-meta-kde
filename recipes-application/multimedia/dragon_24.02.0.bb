# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/release-service/24.02.0/src/dragon-24.02.0.tar.xz"
SRC_URI += "file://0001-Fix-broken-man-page-installation-due-to-defunc-varia.patch"
SRC_URI[sha256sum] = "7631dd661229828d5dce22fe9c782c777183d0659deaf22cd67ed4b2ba0246db"
