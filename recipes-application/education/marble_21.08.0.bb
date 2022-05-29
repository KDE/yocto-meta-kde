# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "\
    https://download.kde.org/stable/release-service/21.08.0/src/marble-21.08.0.tar.xz \
    file://0001_gpsd_8aadc3eb8f9484a65d497d442cd8c61fe1462bef.patch \
"
SRC_URI[sha256sum] = "f40b5386f5502803f72a4551652e06be7b9f779e28113e058f08de9b9f11569f"
