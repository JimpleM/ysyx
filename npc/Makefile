
INC_PATH ?=

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  \
				-O3 --x-assign fast --x-initial fast --noassert

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v" )
SIM_SRCS = $(shell find $(abspath ./vsrc) -name "*.cpp" )

INC_PATH = ./vsrc
TOPNAME = riscv32

VERILATOR_FLAGS += -Wall --trace --cc --exe --build
VERILATOR_FLAGS += -I${INC_PATH}
VERILATOR_FLAGS += --top ${TOPNAME}

LDFLAGS := -LDFLAGS -ldl

all:defualt
#	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	#@echo "Write this Makefile by your self."
	$(VERILATOR) ${VERILATOR_FLAGS} $(VSRCS) $(SIM_SRCS) $(LDFLAGS)

wave:
	./obj_dir/Vtop
	gtkwave wave.vcd

clean:
	-rm -rf obj_dir *.log *.dmp *.vpd core

include ../Makefile
