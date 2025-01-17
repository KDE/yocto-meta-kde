# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/kwallet-pam;nobranch=1;protocol=https"
SRCREV = "6ed4509289212a425a4a765b84e0d30d63227e3e"
S = "${WORKDIR}/git"
