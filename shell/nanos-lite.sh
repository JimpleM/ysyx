cd ${NAVY_HOME}/tests/$1
make ISA=am_native
cp ./build/"$1-am_native" ${NANOS_HOME}/build/ramdisk.img
cd ${NANOS_HOME}
make ARCH=native run