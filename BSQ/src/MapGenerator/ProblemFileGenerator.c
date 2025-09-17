#include <stdlib.h>
#include <time.h>

#include "ProgramParameters.h"

ProgramParameters* ParameterParser(int argc, char** argv);

void main(int argc, char** argv)
{
	ParameterParser* params = ParameterParser(argc, argv);

	if(params.seed == 0)
		params.seed = time(NULL);
	srand(seed);

}