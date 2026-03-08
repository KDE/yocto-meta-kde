# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "git://github.com/sddm/${BPN};nobranch=1;protocol=https \
           file://sddm.conf.plasma-desktop \
           file://sddm.conf.plasma-mobile \
           file://sddm.conf.plasma-bigscreen \
           file://sddm.pam \
           file://sddm-autologin.pam \
           file://sddm-greeter.pam \
"
SRCREV = "4ec29a8bba033d475f197693fac6cb0c383a1da2"
S = "${UNPACKDIR}/git"
