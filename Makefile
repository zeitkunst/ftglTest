# Attempt to load a config.make file.
# If none is found, project defaults in config.project.make will be used.
UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S),Linux)
	include config.make.pi
endif

ifeq ($(UNAME_S),Darwin)
	include config.make.osx
endif

# make sure the the OF_ROOT location is defined
ifndef OF_ROOT
    OF_ROOT=../../..
endif

# call the project makefile!
include $(OF_ROOT)/libs/openFrameworksCompiled/project/makefileCommon/compile.project.mk
