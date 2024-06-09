function_map=("perf1" perf "perf2" perf2)

function perf1(){
    echo "perf1"
    git checkout 7fdc536dcdd2d17c6675a9db77858c8f656fae7e
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

