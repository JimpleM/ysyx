AM_SRCS := riscv/ysyxnpc/start.S \
           riscv/ysyxnpc/trm.c \
           riscv/ysyxnpc/trap.S \
           riscv/ysyxnpc/vme.c \
           riscv/ysyxnpc/ioe.c \
           riscv/ysyxnpc/timer.c \
           riscv/ysyxnpc/input.c \
           riscv/ysyxnpc/gpu.c \
           riscv/ysyxnpc/cte.c \
           riscv/ysyxnpc/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections

# LDFLAGS   += -T $(AM_HOME)/scripts/linker_ysyxnpc.ld 
LDFLAGS   += -T $(AM_HOME)/scripts/linker.ld 

LDFLAGS   += --defsym=_pmem_start=0x80000000  \
			--defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start

# SOCFLAGS += --batch
SOCFLAGS += --elf $(IMAGE).elf
SOCFLAGS += --img $(IMAGE).bin
SOCFLAGS += --diff ${NEMU_HOME}/build/riscv32-nemu-interpreter-so
# 定义一个MAINARGS宏定义给trm.c
CFLAGS += -DMAINARGS=\"$(mainargs)\"
.PHONY: $(AM_HOME)/am/src/riscv/ysyxnpc/trm.c

image: $(IMAGE).elf
	@$(OBJDUMP) -h -t -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

run: image
	$(MAKE) -C $(SOC_HOME) ISA=$(ISA) PLATFORM=$(PLATFORM) run ARGS="$(SOCFLAGS)" 

wave:
	$(MAKE) -C $(SOC_HOME) ISA=$(ISA) PLATFORM=$(PLATFORM) wave ARGS="$(SOCFLAGS)" 

gdb: image
	$(MAKE) -C $(SOC_HOME) ISA=$(ISA) PLATFORM=$(PLATFORM) gdb ARGS="$(SOCFLAGS)"