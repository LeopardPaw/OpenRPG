#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

# As a general rule, options specified in AUTOMAKE_OPTIONS take
# precedence over those specified in AM_INIT_AUTOMAKE, which in
# turn take precedence over those specified on the command line. 

AC_PREREQ([2.69])
AC_INIT(openrpg, 0.1.0-dev, incomingstick@gmail.com)
AM_INIT_AUTOMAKE([subdir-objects])
AM_MAINTAINER_MODE([enable])
AC_CONFIG_SRCDIR([src/main.cpp])
AC_CONFIG_HEADERS([config.h])

AC_OUTPUT(Makefile
		src/Makefile 
		src/modules/Makefile
		src/modules/generator/Makefile
		tests/Makefile
)

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([limits.h stdlib.h sys/ioctl.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_TYPE_SIZE_T

# Checks for library functions.

AC_OUTPUT
