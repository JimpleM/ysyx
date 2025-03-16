#include "base.h"
#include <getopt.h>
#include <stdlib.h>



static int parse_args(int argc, char *argv[]) {

  i_cache_size 		= atoi(argv[1]);
  i_cache_line_size 	= atoi(argv[2]); 
	t_assoc 			= (ASSOC)atoi(argv[3]); 
	i_cache_set 		= atoi(argv[4]); 
	t_replace 			= (REPLACE)atoi(argv[5]); 
	t_write 			= (WRITE)atoi(argv[6]); 
	filepath 			= argv[7]; 

	printf("CacheSize		: %d\n",i_cache_size 		);
	printf("CacheLineSize	: %d\n",i_cache_line_size 	);	
	printf("MappingMethod	: %d\n",t_assoc 			);	
	printf("LineCountEachSet: %d\n",i_cache_set 		);		
	printf("ReplacePolicy	: %d\n",t_replace 			);	
	printf("WritePolicy		: %d\n",t_write 			);
	printf("filepath		: %s\n",filepath 			);
	printf("\n");

  	return 0;
}

int main(int argc, char *argv[])
{
	char ch = '\0';
	// do
	// {
		InitVariables();
		// GetInput(); // get input information
		parse_args(argc, argv);
		CalcInfo();
		CreateCache();
		FileTest();
		PrintOutput(); // output the result
	// 	std::cout << "Continue/Exit(C/E)" << std::endl;
	// 	std::cin >> ch;
	// } while ((ch != 'e') && (ch != 'E'));

	return 0;
}
