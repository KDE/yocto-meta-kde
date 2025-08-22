# Make sure sysroot is populated with winpr-hash3 and
# winpr-makecert3. Both are needed when executing the do_configure
# task for krdp.
SYSROOT_DIRS += "${bindir}"
