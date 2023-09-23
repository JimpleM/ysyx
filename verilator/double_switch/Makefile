VERILATOR = verilator

default:
	$(VERILATOR) -cc -Wall --trace --exe --build top.v top.c
	obj_dir/Vtop

wave:
	gtkwave wave.vcd

clean:
	-rm -rf obj_dir *.log *.dmp *.vpd core
