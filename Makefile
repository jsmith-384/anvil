CXX = clang++

FILES = files/anvil_init.cpp

OUTPUT = bin/
EXECNAME = anvil
ANVIL_BUILD_ID = ALPHA
ANVIL_BUILD_ISDEBUG = false

CFLAGS = -shared
CFLAGS+= -Iinclude
CFLAGS+= -DANVIL_BUILD_ID="\"$(ANVIL_BUILD_ID)\""
CFLAGS+= -DANVIL_BUILD_ISDEBUG="$(ANVIL_BUILD_ISDEBUG)"
CFLAGS+= -o $(OUTPUT)$(EXECNAME).dll
CFLAGS+= -Wl,--output-def=$(OUTPUT)$(EXECNAME).def

ifeq ($(VERBOSE),true)
	CFLAGS+=-v
endif
build:
	$(CXX) $(FILES) $(CFLAGS)
