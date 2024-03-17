meta-kde
========

This layer contains recipes for workspace and application products of the KDE
community. For KDE Frameworks recipes see meta-kf6.

Dependencies
============

This layer depends on:

  URI: https://invent.kde.org/packaging/yocto-meta-kf6
  branch: master

  URI: https://code.qt.io/cgit/yocto/meta-qt6.git
  tag: v5.11.1

  URI: https://git.yoctoproject.org/cgit/cgit.cgi/meta-java
  branch: master

  URI: http://git.openembedded.org/meta-openembedded
  layers: meta-networking, meta-python, meta-oe
  branch: master

  URI: https://git.yoctoproject.org/cgit/cgit.cgi/poky
  layers: meta-yocto-bsp, meta-poky, meta
  branch: master

Configuration
=============

The layer makes use of the following DISTRO_FEATURE values:

- `desktop-portal` : KDE custom feature that enables/disables integration with desktop portal technologies (including: screen-sharing, package install via Flatpack); note that the support is very experimental and it is only known to even´ build without problems for versions > nanbield

Patches
=======

Please submit any patches against the kde layer on KDE GitLab project.
Project available on https://invent.kde.org/packaging/yocto-meta-kde
GitLab guide on https://community.kde.org/Infrastructure/GitLab
