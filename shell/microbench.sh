cd ../am-kernels/benchmarks/microbench/
make ARCH="riscv32e-$1" run mainargs=$2 -s
