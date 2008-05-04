#*******************************************************************************
# Copyright (c) 2000, 2007 IBM Corporation and others.
# All rights reserved. This program and the accompanying materials
# are made available under the terms of the Eclipse Public License v1.0
# which accompanies this distribution, and is available at
# http://www.eclipse.org/legal/epl-v10.html
#
# Contributors:
#     IBM Corporation - initial API and implementation
#*******************************************************************************

# Makefile for SWT libraries on Cocoa/Mac

include make_common.mak

SWT_PREFIX=swt
SWTPI_PREFIX=swt-pi
SWTXULRUNNER_PREFIX=swt-xulrunner
WS_PREFIX=cocoa
SWT_VERSION=$(maj_ver)$(min_ver)
SWT_LIB=lib$(SWT_PREFIX)-$(WS_PREFIX)-$(SWT_VERSION).jnilib
SWTPI_LIB=lib$(SWTPI_PREFIX)-$(WS_PREFIX)-$(SWT_VERSION).jnilib
XULRUNNER_LIB=lib$(SWTXULRUNNER_PREFIX)-$(WS_PREFIX)-$(SWT_VERSION).jnilib

# Uncomment for Native Stats tool
#NATIVE_STATS = -DNATIVE_STATS

#SWT_DEBUG = -g
ARCHS = -arch i386 -arch ppc
CFLAGS = -c -xobjective-c -Wall $(ARCHS) -DSWT_VERSION=$(SWT_VERSION) $(NATIVE_STATS) $(SWT_DEBUG) -DUSE_ASSEMBLER -DCOCOA \
	-I /System/Library/Frameworks/JavaVM.framework/Headers \
	-I /System/Library/Frameworks/Cocoa.framework/Headers
LFLAGS = -bundle $(ARCHS) -framework JavaVM -framework Cocoa -framework Carbon -framework WebKit
SWT_OBJECTS = swt.o c.o c_stats.o callback.o
SWTPI_OBJECTS = swt.o os.o os_structs.o os_stats.o os_custom.o
XULRUNNER_OBJECTS = swt.o xpcom.o xpcom_custom.o xpcom_structs.o xpcom_stats.o xpcominit.o xpcominit_structs.o xpcominit_stats.o

XULRUNNER_SDK = /Users/Shared/xulrunner/1.8.0.1/mozilla/dist/i386/dist/sdk
#XULRUNNER_SDK = /Users/Shared/gecko-sdk
#XULRUNNER_LIBS = -L${XULRUNNER_SDK}/lib -lxpcomglue
XULRUNNER_LIBS = $(XULRUNNER_SDK)/lib/libxpcomglue.a $(XULRUNNER_SDK)/../../../ppc/dist/sdk/lib/libxpcomglue.a
XULRUNNERCFLAGS = -c -Wall $(ARCHS) -DSWT_VERSION=$(SWT_VERSION) $(NATIVE_STATS) $(SWT_DEBUG) -DUSE_ASSEMBLER -DCOCOA -I /System/Library/Frameworks/JavaVM.framework/Headers \
	-Wno-non-virtual-dtor -include ${XULRUNNER_SDK}/include/mozilla-config.h -I${XULRUNNER_SDK}/include 
XULRUNNERLFLAGS = $(LFLAGS)

all: $(SWT_LIB) $(SWTPI_LIB) $(XULRUNNER_LIB)

.c.o:
	cc $(CFLAGS) $*.c

$(SWT_LIB): $(SWT_OBJECTS)
	cc -o $(SWT_LIB) $(LFLAGS) $(SWT_OBJECTS)

$(SWTPI_LIB): $(SWTPI_OBJECTS)
	cc -o $(SWTPI_LIB) $(LFLAGS) $(SWTPI_OBJECTS)

$(XULRUNNER_LIB): $(XULRUNNER_OBJECTS)
	g++ -o $(XULRUNNER_LIB) $(XULRUNNERLFLAGS) $(XULRUNNER_LIBS) $(XULRUNNER_OBJECTS)

xpcom.o: xpcom.cpp
	g++ $(XULRUNNERCFLAGS) xpcom.cpp
xpcom_custom.o: xpcom_custom.cpp
	g++ $(XULRUNNERCFLAGS) xpcom_custom.cpp
xpcom_structs.o: xpcom_structs.cpp
	g++ $(XULRUNNERCFLAGS) xpcom_structs.cpp
xpcom_stats.o: xpcom_stats.cpp
	g++ $(XULRUNNERCFLAGS) xpcom_stats.cpp
xpcominit.o: xpcominit.cpp
	g++ $(XULRUNNERCFLAGS) xpcominit.cpp
xpcominit_structs.o: xpcominit_structs.cpp
	g++ $(XULRUNNERCFLAGS) xpcominit_structs.cpp
xpcominit_stats.o: xpcominit_stats.cpp
	g++ $(XULRUNNERCFLAGS) xpcominit_stats.cpp

install: all
	cp *.jnilib $(OUTPUT_DIR)

clean:
	rm -f *.jnilib *.o
