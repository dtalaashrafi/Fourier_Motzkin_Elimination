#include "../include/FME_Support_fmeDS.h"
#include "../include/FME_Support_projection.h"
#include <stdlib.h>

int main (int argc, char ** argv)
{
	project(argv[1], atoi(argv[2]), atoi(argv[3]));
	
	return 0;
}
