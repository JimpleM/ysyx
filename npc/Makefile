VERILATOR = verilator
# project source
VSRCS = $(shell find $(abspath $(NPC_HOME)/vsrc) -name "*.v" )
SIM_SRCS = $(shell find $(abspath $(NPC_HOME)/sim_src) -name "*.cpp" )

INC_PATH = $(NPC_HOME)/vsrc
TOPNAME = riscv32

VERILATOR_FLAGS += -Wall --trace --cc --exe --build
VERILATOR_FLAGS += -I${INC_PATH}
VERILATOR_FLAGS += --top ${TOPNAME}

LDFLAGS := -LDFLAGS -ldl



all:defualt
#	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) ${VERILATOR_FLAGS} $(VSRCS) $(SIM_SRCS) $(LDFLAGS)

run:sim
	./obj_dir/V${TOPNAME}  ${NPCFLAGS} $(IMG)

wave:
	gtkwave wave.vcd

clean:
	-rm -rf obj_dir *.log *.dmp *.vpd core

include ../Makefile
