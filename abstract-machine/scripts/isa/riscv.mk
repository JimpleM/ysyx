CROSS_COMPILE := riscv64-linux-gnu-
COMMON_CFLAGS := -fno-pic -march=rv64g -mcmodel=medany -mstrict-align
CFLAGS        += $(COMMON_CFLAGS) -static
ASFLAGS       += $(COMMON_CFLAGS) -O0
LDFLAGS       += -melf64lriscv

# overwrite ARCH_H defined in $(AM_HOME)/Makefile
ARCH_H := arch/riscv.h

### COMMON_CFLAGS 通用的编译器选项
### -fno-pic 禁用位置独立代码
### -march=rv64g 目标架构为 RV64G
### -mcmodel=medany 内存模型为 medany
### -mstrict-align	启用严格的内存对齐要求，以确保数据对齐性

### -static 编译为静态可执行文件，这意味着程序将不依赖于共享库
### -O0 禁用优化
### -melf64lriscv 链接为 RISC-V 64位目标，以生成 ELF64 格式的可执行文件