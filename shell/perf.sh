commit_map=(
  "perf1" "d8dace4"
  "perf2" "4493dbe"
  "perf3" "9edee1f"
  "perf4" "0066f26"
  )

current_commit=$(git rev-parse HEAD)
echo "当前commit ID: $current_commit"

for ((i=0; i<${#commit_map[@]}; i+=2)); do
  # 获取键
  key=${commit_map[$i]}
  # 获取值
  value=${commit_map[$((i+1))]}
  if [ "$1" == "$key" ]; then
    echo $value
    git checkout $value
    break
  fi
done

cd ../am-kernels/benchmarks/microbench/
make ARCH="riscv32e-ysyxsoc" run mainargs=$2 -s > "$1_$2.txt"
git checkout $current_commit

# 运行
# ./perf.sh perf1 train
