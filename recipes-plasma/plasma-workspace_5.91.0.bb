# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += " \
    https://download.kde.org/unstable/plasma/5.91.0/plasma-workspace-5.91.0.tar.xz \
    file://0001-Fix-systemd-service-file-generation-for-cross-compil.patch \
"
SRC_URI[sha256sum] = "3b882c83a5e077f8ac3dd7e564c268cf87baed4bb278c27f68307479a917f5df"

