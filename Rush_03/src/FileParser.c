
#include <stdio.h>

#include "../includes/mapdata.h"
#include "MapGenerator/ProgramParameters.h"

int ParseFromFiles(t_mapdata** Output, char** FilePath, int FileCount)
{
	int SuccessfullyOpenedFiles = 0;
	FILE** FilesToParse = new(sizeof(FILE*) * FileCount);
	for(int FileIndex = 0; FileIndex < FileCount; ++FileIndex)
	{
		FILE* OpenedFile = fopen(FilePath[FileIndex], "r");
		if(OpenedFile == NULL)
		{
			printf("Failed To Open File At: %s\n", FilePath[FileIndex]);
			continue;
		}
		FilesToParse[SuccessfullyOpenedFiles++] = OpenedFile;
	}

	char ReadBuffer[4096];
	Output = new(sizeof(t_mapdata) * SuccessfullyOpenedFiles);

	// For Each File Let's Read!
	for(int i = 0; i < FileCount; ++i)
	{
		FILE* CurrentFile = FilesToParse[i];
		if (fgets(ReadBuffer, 4, CurrentFile) == NULL)
		{
			// Empty File? Lmao
			continue;
		}

		int YHeight = atoi(ReadBuffer);
		if( YHeight <= 0 )
		{
			// Bad Dimension!
			continue;
		}
		Output[i].Dimensions.y = YHeight;

		int counter = 0;
		while(ReadBuffer+counter >= '0' || ReadBuffer + counter <= '9' || ReadBuffer+counter ==  )

		// Read Data From The File Until We Get To The End
		while(fgets(ReadBuffer, 4096, CurrentFile) != NULL)
		{
			Output[i].Dimensions.y =
		}
		fclose(CurrentFile);
	}


	return FileCount;
}

int ParseFromCMD(t_mapdata*& Output)
{
	return NULL;
}