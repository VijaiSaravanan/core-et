# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vtop.mk

default: Vtop

### Constants...
# Perl executable (from $PERL, defaults to 'perl' if not set)
PERL = perl
# Python3 executable (from $PYTHON3, defaults to 'python3' if not set)
PYTHON3 = python3
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /home/vijay/vyoma/workspace/tools/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?=
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?=

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vtop
# Module prefix (from --prefix)
VM_MODPREFIX = Vtop
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
   -fno-omit-frame-pointer -std=c++20 -DVERILATOR -DTRACE -I/home/vijay/vyoma/workspace/projects/july7/core-et/dv/common -I/home/vijay/vyoma/workspace/projects/july7/core-et/dv/cosim/src -I/home/vijay/vyoma/workspace/projects/july7/core-et/dv/cosim/src/checker -I/home/vijay/vyoma/workspace/projects/july7/core-et/dv/cosim/src/events -I/home/vijay/vyoma/workspace/projects/july7/core-et/dv/cosim/src/3rparty/lz4_stream/ -I/tools/aifoundry/lz4/1.8.0/include -I/home/vijay/vyoma/workspace/projects/july7/core-et/dv/cosim/src/3rparty/spdlog/1.4.1/include -I/home/vijay/vyoma/workspace/projects/july7/core-et/dv/cosim/src/3rparty/cereal/1.3.0/include -I/home/vijay/vyoma/workspace/projects/july7/core-et/dv/cosim/src/3rparty/toml11/3.1.0/include -I/home/vijay/vyoma/workspace/tools/install/riscv/x86_64-pc-linux-gnu/riscv64-unknown-elf/include -I/home/vijay/vyoma/workspace/projects/july7/core-et/dv/arch_monitors/csrc -I/home/vijay/vyoma/workspace/projects/july7/core-et/extern/et-platform/sw-sysemu -I/home/vijay/vyoma/workspace/projects/july7/core-et/dv/cosim/src -I/home/vijay/vyoma/workspace/projects/july7/core-et/dv/cosim/src/checker -I/home/vijay/vyoma/workspace/projects/july7/core-et/dv/cosim/src/events -I/home/vijay/vyoma/workspace/projects/july7/core-et/dv/cosim/src/3rparty/lz4_stream/ -I/tools/aifoundry/lz4/1.8.0/include -I/home/vijay/vyoma/workspace/projects/july7/core-et/dv/cosim/src/3rparty/spdlog/1.4.1/include -I/home/vijay/vyoma/workspace/projects/july7/core-et/dv/cosim/src/3rparty/cereal/1.3.0/include -I/home/vijay/vyoma/workspace/projects/july7/core-et/dv/cosim/src/3rparty/toml11/3.1.0/include -I/home/vijay/vyoma/workspace/tools/install/riscv/x86_64-pc-linux-gnu/riscv64-unknown-elf/include -I/home/vijay/vyoma/workspace/projects/july7/core-et/dv/arch_monitors/csrc -I/home/vijay/vyoma/workspace/projects/july7/core-et/extern/et-platform/sw-sysemu -I/home/vijay/vyoma/workspace/projects/july7/core-et/dv/common -I/home/vijay/vyoma/workspace/projects/july7/core-et/dv/arch_monitors/libs -I/home/vijay/vyoma/workspace/projects/july7/core-et/dv/standalone/common -I/home/vijay/vyoma/workspace/projects/july7/core-et/dv/standalone/cpu_subsystem/csrc -I/home/vijay/vyoma/workspace/projects/july7/core-et/dv/cosim/src -I/home/vijay/vyoma/workspace/projects/july7/core-et/dv/cosim/src/checker -I/home/vijay/vyoma/workspace/projects/july7/core-et/dv/arch_monitors/csrc -I/home/vijay/vyoma/workspace/projects/july7/core-et/extern/et-platform/sw-sysemu \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
   -lpthread -lz -no-pie -L/home/vijay/vyoma/workspace/projects/july7/core-et/dv/standalone/cpu_subsystem/build/csrc_lib -Wl,-rpath=/home/vijay/vyoma/workspace/projects/july7/core-et/dv/standalone/cpu_subsystem/build/csrc_lib -lcosim -L/home/vijay/vyoma/workspace/projects/july7/core-et/dv/standalone/cpu_subsystem/build/csrc_lib -Wl,-rpath=/home/vijay/vyoma/workspace/projects/july7/core-et/dv/standalone/cpu_subsystem/build/csrc_lib -lcosim -L/home/vijay/vyoma/workspace/projects/july7/core-et/extern/et-platform/sw-sysemu-prefix/src/sw-sysemu-build -lsw-erbium -Wl,--allow-multiple-definition \
  /home/vijay/vyoma/workspace/projects/july7/core-et/dv/standalone/cpu_subsystem/build/csrc_lib/minion_monitor.o \
  /home/vijay/vyoma/workspace/projects/july7/core-et/dv/standalone/cpu_subsystem/build/csrc_lib/dreams_event_monitor.o \
  /home/vijay/vyoma/workspace/projects/july7/core-et/dv/standalone/cpu_subsystem/build/csrc_lib/testEndMonitor.o \
  /home/vijay/vyoma/workspace/projects/july7/core-et/dv/standalone/cpu_subsystem/build/csrc_lib/testBase.o \
  /home/vijay/vyoma/workspace/projects/july7/core-et/dv/standalone/cpu_subsystem/build/csrc_lib/testLog.o \
  /home/vijay/vyoma/workspace/projects/july7/core-et/dv/standalone/cpu_subsystem/build/csrc_lib/libcosim.so \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
  Vtop_main \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
  ../.. \
  ../../csrc \

### Default rules...
# Include list of all generated classes
include Vtop_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

Vtop_main.o: /home/vijay/vyoma/workspace/projects/july7/core-et/dv/standalone/cpu_subsystem/csrc/Vtop_main.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<

### Link rules... (from --exe)
Vtop: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@

# Verilated -*- Makefile -*-
