#ifndef PROGRAMPARAMETERS_H
# define PROGRAMPARAMETERS_H

#include <stdlib.h>

void* new(size_t memorysize)
{
	return malloc(memorysize);
}

typedef struct s_ProgramParameters
{
	unsigned int seed;
} ProgramParameters;


#endif
