AC_INIT([zxcvbn-c],[0.01])
AC_PREREQ([2.68])
AC_CONFIG_MACRO_DIRS([m4])
PKG_INSTALLDIR
AC_CONFIG_SRCDIR([zxcvbn-check.c])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE([1.11 foreign -Wall -Werror -Wno-extra-portability])
AC_CONFIG_FILES([Makefile])
AC_PROG_CC
AC_PROG_CXX
dnl = Do Next Line
dnl AC_CHECK_LIB([zxcvbn],[ZxcvbnMatch])
PKG_CHECK_MODULES([ZXCVBN],[libzxcvbn])
AC_OUTPUT
