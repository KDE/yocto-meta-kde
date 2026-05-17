# SPDX-FileCopyrightText: 2024 Marc Ferland <marc.ferland@sonatest.com>
#
# SPDX-License-Identifier: MIT

# For Krdp x264 support
PACKAGECONFIG:append = " x264 gpl"

# For vaapi support (hardware encoding)
PACKAGECONFIG:append = " vaapi"
