
#include <stdio.h>

#include "../includes/mapdata.h"

int ParseFromFiles(t_mapdata*& Output, char** FilePath, int FileCount)
{
	FILE* File = fopen(FilePath, "r");
	char ReadBuffer[4096];

	for(int i = 0; i < FileCount; ++i) {

	}
	while(fgets(ReadBuffer, 4096, File) != NULL)
	{

	}

	fclose(File);
}

int ParseFromCMD(t_mapdata*& Output)
{
	return NULL;
}