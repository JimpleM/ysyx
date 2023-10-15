
#include "cpu.h"
#include "init.h"
#include "sdb.h"

#include "risc32_lib.h"


int main(int argc, char *argv[]){
	init_sim();

	reset();

	init_npc(argc,argv);

	init_sdb();
	
	sdb_mainloop();

	finish_sim();
	return 0;
}
