# xdg-autostart
# -------------
# Enable the xdg-autostart option so .desktop files are automatically
# converted to systemd user services. If this option is not present,
# 'startplasma' falls back on 'classic boot' and this can cause issues
# like:
#
# https://bugs.kde.org/show_bug.cgi?id=478313
#
# To get an idea of how plasma starts:
#
# https://github.com/KDE/plasma-workspace/blob/master/startkde/startplasma.cpp
#
# cgroupv2
# --------
# cgroupv2 (aka: unified hierarchy) is required since https://phabricator.kde.org/T11914
# enable it explicitly for Yocto < Scarthgap; it is on unconditionally enabled
# in later versions
#
CONFIG_CGROUPS = "${@bb.utils.contains('PV', '255.4', 'cgroupv2', '', d)}"
PACKAGECONFIG:append = " xdg-autostart ${CONFIG_CGROUPS}"
