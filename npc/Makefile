VERILATOR = verilator
# project source
VSRCS = $(shell find $(abspath $(NPC_HOME)/vsrc) -name "*.v" )
SIM_SRCS := $(shell find $(abspath $(NPC_HOME)/sim_src) -name "*.cpp" )
SRCS += $(shell find -L $(abspath $(NPC_HOME)/sim_src/sdb) -name "*.cpp" )

VERILATOR_INC_PATH = -I$(NPC_HOME)/vsrc

TOPNAME = riscv32

VERILATOR_FLAGS += --trace --cc --exe --build 
VERILATOR_FLAGS += ${VERILATOR_INC_PATH}
VERILATOR_FLAGS += --top ${TOPNAME}

LDFLAGS := -ldl

INC_PATH += $(NPC_HOME)/sim_src/include
INCFLAGS += $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS) $(SRCS)

SDB		+= $(NPC_HOME)/sim_src/sdb

DIFFTEST = ${NEMU_HOME}/build/riscv32-nemu-interpreter-so
DIFF := --diff=${DIFFTEST}
IMGS ?= ../am-kernels/tests/cpu-tests/build/if-else-riscv32e-npc.bin
IMG = --img=${IMGS}

all:defualt
#	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) ${VERILATOR_FLAGS} $(VSRCS) $(SIM_SRCS)  \
	$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS))

run:sim
	./obj_dir/V${TOPNAME} ${DIFF} ${IMG} 

wave:
	gtkwave wave.vcd

clean:
	-rm -rf obj_dir *.log *.dmp *.vpd core

include ../Makefile
