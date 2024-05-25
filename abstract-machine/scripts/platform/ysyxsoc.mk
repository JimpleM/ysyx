AM_SRCS := riscv/ysyxsoc/start.S \
           riscv/ysyxsoc/trm.c \
           riscv/ysyxsoc/trap.S 

CFLAGS    += -fdata-sections -ffunction-sections

LDFLAGS   += -T $(AM_HOME)/scripts/linker_ysyxsoc.ld \
			--defsym=_pmem_start=0x20000000  \
			--defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start

# SOCFLAGS += --batch
SOCFLAGS += --elf $(IMAGE).elf
SOCFLAGS += --img $(IMAGE).bin
SOCFLAGS += --diff ${NEMU_HOME}/build/riscv32-nemu-interpreter-so

image: $(IMAGE).elf
	@$(OBJDUMP) -h -t -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

run: image
	$(MAKE) -C $(NPC_HOME) ISA=$(ISA) run ARGS="$(SOCFLAGS)" 

gdb: image
	$(MAKE) -C $(NPC_HOME) ISA=$(ISA) gdb ARGS="$(SOCFLAGS)"