# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI += "git://anongit.kde.org/plasma-activities-stats;nobranch=1;protocol=https"
SRCREV = "6a908cb7e3db65de9c948c8968fd89e18695ae76"
S = "${WORKDIR}/git"
