#!/bin/bash
cd ..
echo "export YSYX_HOME=$(pwd)" >> ~/.zshrc
source ~/.zshrc
echo "export NEMU_HOME=$YSYX_HOME/nemu " >> ~/.zshrc
echo "export AM_HOME=$YSYX_HOME/abstract-machine " >> ~/.zshrc
echo "export NAVY_HOME=$YSYX_HOME/navy-apps "  >> ~/.zshrc
echo "export NVBOARD_HOME=$YSYX_HOME/nvboard " >> ~/.zshrc
echo "export NPC_HOME=$YSYX_HOME/npc " >> ~/.zshrc
echo "export YSYXNPC_HOME=$YSYX_HOME/ysyxnpc " >> ~/.zshrc
echo "export SOC_HOME=$YSYX_HOME/soc " >> ~/.zshrc
echo "export YSYXSOC_HOME=$YSYX_HOME/ysyxSoC " >> ~/.zshrc

sudo apt-get install -y g++-riscv64-linux-gnu binutils-riscv64-linux-gnu
# 使用sudo权限修改以下文件:

# --- /usr/riscv64-linux-gnu/include/gnu/stubs.h
# +++ /usr/riscv64-linux-gnu/include/gnu/stubs.h
# @@ -5,5 +5,5 @@
#  #include <bits/wordsize.h>

#  #if __WORDSIZE == 32 && defined __riscv_float_abi_soft
# -# include <gnu/stubs-ilp32.h>
# +//# include <gnu/stubs-ilp32.h>
#  #endif

# 用于生成menuconfig
sudo apt-get install bison flex


sudo apt-get install -y gcc-12 g++-12
sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-12 40
sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-11 100
sudo update-alternatives --config gcc    #查看默认设置

sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-12 40
sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-11 100
sudo update-alternatives --config g++


#verilator
sudo apt-get install git perl python3 make autoconf g++ flex bison ccache
sudo apt-get install libgoogle-perftools-dev numactl perl-doc
sudo apt-get install libfl-dev
sudo apt-get install zlibc zlib1g zlib1g-dev

git clone https://github.com/verilator/verilator

unset VERILATOR_ROOT
cd verilator
git checkout v5.008 

autoconf         # Create ./configure script
./configure      # Configure and create Makefile
make -j `nproc`  # Build Verilator itself (if error, try just 'make')
sudo make install
