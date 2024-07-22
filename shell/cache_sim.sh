#!/bin/zsh
# cd ../am-kernels/benchmarks/microbench/
cd ../am-kernels/tests/cpu-tests/
make ARCH="riscv32e-ysyxnpc" ALL=wanshu
make ARCH="riscv32e-nemu" ALL=wanshu cache_sim=1 run