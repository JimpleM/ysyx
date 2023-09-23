#!/bin/zsh
marco(){
	echo "$(pwd)" > ~/Documents/ysyx/ysyx-workbench/test/marco.log
	echo "save pwd $(pwd)"
}
polo(){
   cd "$(cat ~/Documents/ysyx/ysyx-workbench/test/marco.log)"
}
