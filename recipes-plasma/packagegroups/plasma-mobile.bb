DESCRIPTION = "KDE Plasma Mobile"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

inherit packagegroup

RDEPENDS_${PN} = " \
    breeze \
    kactivitymanagerd \
    kdecoration \
    kscreenlocker \
    kwayland-integration \
    kwin \
    libkscreen \
    libksysguard \
    milou \
    plasma-integration \
    plasma-phone-components \
    plasma-workspace \
    systemsettings \
"
