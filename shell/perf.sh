function_map=("perf1" perf "perf2" perf2)

function perf1(){
    echo "perf1"
    git checkout 984c91fa63fcc1a1bfc467fe19155b1de68d2ad1
    cd ../am-kernels/benchmarks/microbench/
    make ARCH="riscv32e-ysyxsoc" run mainargs=$2 -s
}

function perf2(){
    echo "perf2"
}


for key in "${function_map[@]}"; do
  if [ "$1" == "$key" ]; then
    eval "$key"
    break
  fi
done

