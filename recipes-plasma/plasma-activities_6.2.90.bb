# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/plasma-activities;nobranch=1;protocol=https"
SRCREV = "b1db320ad6e1ac74bae809d684bb95683a24d2f6"
S = "${WORKDIR}/git"
