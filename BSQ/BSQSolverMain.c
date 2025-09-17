/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:15:16 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/17 11:48:54 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "includes/mapdata.h"

int ParseFromFiles(t_mapdata*& Output, char** FilePath, int FileCount);
int ParseFromCMD(t_mapdata*& Output);
int Solve(t_mapdata* MapData);
int PrintMap(t_mapdata* Output);

int main(int argc, char** argv)
{
	t_mapdata* MapDataArray = NULL;
	int MapDataElementLength = argc > 1 ? ParseFromFiles(MapDataArray, argv+1, argc-1 ) : ParseFromCMD(MapDataArray);
	for(int i = 0; i < MapDataElementLength; ++i)
	{
		if((MapDataArray + i) == NULL)
		{
			printf("Bad Map\n");
			continue;
		}
		Solve(MapDataArray + i);
		PrintMap(MapDataArray + i);
	}
	return 0;
}
