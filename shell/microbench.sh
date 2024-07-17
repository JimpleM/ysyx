cd ../am-kernels/benchmarks/microbench/
make ARCH="riscv32-$1" run mainargs=$2 -s
