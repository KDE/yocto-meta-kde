# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/unstable/release-service/24.01.80/src/kweather-24.01.80.tar.xz"
SRC_URI += "file://851d28f0f7cee27aecd40a949436e4b73a3afb0f.patch"
SRC_URI[sha256sum] = "07e0432d0c415b8df64cc4b2fd3a00768a08616b948a048eb5aa2b08304f8230"
