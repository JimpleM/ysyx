### Run the nanos-lite
```
make ARCH=$ISA update
make ARCH=$ISA run
```
* On Native

When the first time update, it need some time
```
make ARCH=native update
make ARCH=native run
```
* On Nemu (riscv32-nemu)
```
make ARCH=riscv32-nemu update
make ARCH=riscv32-nemu run
```
如果没有任何内容输出到终端上并且HIT BAD TRAP，需要在nemu目录下配置，然后重新update run
```
make menuconfig

[*]Devices
```