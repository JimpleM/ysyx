set=2
for i in 128 256 512 1024 2048 4096;
do
  echo "cache size is ${i}"
  for j in 1 2 3 4;
  do
    cat ./log/CSize${i}_POLICY_${j}_SET${set}.txt | grep "Average cache hit rate:"
  done
done
