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