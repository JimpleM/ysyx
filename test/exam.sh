#!/bin/zsh

echo > out.log

for ((count=0;;count++))
do
	zsh ./test.sh >> out.log
	if [[ $? -ne 0 ]]; then
		echo "$count times"
		break
	fi
done
