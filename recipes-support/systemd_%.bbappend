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
# Enable cgroupv2 (aka: unified hierarchy). Since task T11914, support
# for systemd and slices was added.
#
PACKAGECONFIG:append = " xdg-autostart cgroupv2"
