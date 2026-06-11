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
SRCREV = "bc9eee8280275723767213220e88f6b14157ba1f"

