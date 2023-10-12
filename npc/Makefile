VERILATOR = verilator
# project source
VSRCS = $(shell find $(abspath $(NPC_HOME)/vsrc) -name "*.v" )
SIM_SRCS := $(shell find $(abspath $(NPC_HOME)/sim_src) -name "*.cpp" )
SIM_SRCS += $(shell find $(abspath $(NPC_HOME)/sim_src/sdb) -name "*.cpp" )

VERILATOR_INC_PATH = $(NPC_HOME)/vsrc

TOPNAME = riscv32

# VERILATOR_FLAGS += --trace --cc --exe --build 
# VERILATOR_FLAGS += -I${VERILATOR_INC_PATH}
# VERILATOR_FLAGS += --top ${TOPNAME}
VERILATOR_FLAGS +=  -O3 -noassert --x-assign fast --x-initial fast -j 2
VERILATOR_FLAGS +=  -cc --exe  --build  --clk clk  
VERILATOR_FLAGS += ${VERILATOR_INC_PATH}
VERILATOR_FLAGS += --top ${TOP_MODULE} --prefix Vtop -Wno-DECLFILENAME

LDFLAGS := -LDFLAGS -ldl

INC_PATH = -I$(NPC_HOME)/sim_src/include
INCFLAGS = $(addprefix -CFLAGS ,${INC_PATH})

SDB		+= $(NPC_HOME)/sim_src/sdb

DIFFTEST = ${NEMU_HOME}/build/riscv32-nemu-interpreter-so
DIFF := --diff=${DIFFTEST}
IMGS ?= ../am-kernels/tests/cpu-tests/build/if-else-riscv32e-npc.bin
IMG = --img=${IMGS}

all:defualt
#	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) ${VERILATOR_FLAGS} $(VSRCS) $(SIM_SRCS)  $(INCFLAGS) $(LDFLAGS)

run:sim
	./obj_dir/V${TOPNAME} ${DIFF} ${IMG} 

wave:
	gtkwave wave.vcd

clean:
	-rm -rf obj_dir *.log *.dmp *.vpd core

include ../Makefile
