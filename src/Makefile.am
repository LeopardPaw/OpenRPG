
SUBDIRS = modules

# what flags you want to pass to the CXX compiler & linker
AM_CXXFLAGS = -I$(top_srcdir)/src/includes -g -Wall --std=c++14
AM_LDFLAGS =

bin_PROGRAMS = openrpg
openrpg_SOURCES = main.cpp \
                config.h \
                utils.h \
                utils.cpp

utils.o: utils.cpp utils.h
    g++ AM_CXXFLAGS