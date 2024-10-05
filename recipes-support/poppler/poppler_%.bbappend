# SPDX-FileCopyrightText: 2020-2024 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

# scarthgap poppler packaging only provides qt5 build option that is conflicting with
# qt6 option for later versions; yet due to the inherit hack the old version builds against qt6
QT_CONFIG = "${@bb.utils.contains('PV', '23.04.0', 'qt5', 'qt6', d)}"
PACKAGECONFIG:append = " ${QT_CONFIG}"
inherit qt6-cmake
