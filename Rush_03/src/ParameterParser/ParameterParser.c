#include <stddef.h>

#include "ProgramParameters.h"





ProgramParameters* ParameterParser(int argc, char** argv)
{
	ProgramParameters* params = new(sizeof(ProgramParameters));
	if(!params)
		return NULL;

	for(int i = 1; i < argc; ++i)
	{

	}
}