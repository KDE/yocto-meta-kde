# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "git://github.com/Swordfish90/qmltermwidget.git;nobranch=1;protocol=https \
           file://0003-Remove-duplicate-files-from-install.patch \
"
SRCREV = "ce8e09ad4daeb9fe59b60d6b228b0f7cf4055e16"
S = "${UNPACKDIR}/git"
