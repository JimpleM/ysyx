AM_SRCS := riscv/npc/start.S \
           riscv/npc/trm.c \
           riscv/npc/ioe.c \
           riscv/npc/timer.c \
           riscv/npc/input.c \
           riscv/npc/cte.c \
           riscv/npc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
LDFLAGS   += -T $(AM_HOME)/scripts/linker.ld \
						 --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start

NPCFLAGS += -i $(IMAGE).bin

CFLAGS += -DMAINARGS=\"$(mainargs)\"
.PHONY: $(AM_HOME)/am/src/riscv/npc/trm.c

# -include $(NPC_HOME)/Makefile

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

image: $(IMAGE).elf
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

run: image
    $(VERILATOR) ${VERILATOR_FLAGS} $(VSRCS) $(SIM_SRCS) $(LDFLAGS)
