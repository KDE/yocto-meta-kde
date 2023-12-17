# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "https://download.kde.org/unstable/plasma/5.90.0/kwin-5.90.0.tar.xz \
    file://4789.patch \
"
SRC_URI[sha256sum] = "4866568edb9d2bae8e3570a7a492a36b2f2483f9d3a520eb88a62cbfdd54a5e1"

