/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 12:27:10 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/12 13:39:23 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ischaracteraseperator(char charactertocheck, char *charset)
{
	int counter = 0;
	while(*(charset + counter) != '\0')
	{
		if(charactertocheck == *(charset + counter))
			return 1;
		++counter;
	}
	return 0;
}

int getnextindexatseparatorfrom(char* str, int startindex, char* charset)
{
	int counter = startindex;
	while(*(str + counter))
	{
		++counter;
		if(ischaracteraseperator(*(str + counter), charset))
		{
			break;
		}
	}
	return counter;
}

int countinstancesofseperatedchars(char *str, char *charset)
{
	int pointercounter = 0;
	int seperatorcounter = 1; // Always 1 string
	while(*(str + pointercounter) != '\0')
	{
		if(ischaracteraseperator(*(str + pointercounter), charset))
			++seperatorcounter;
		++pointercounter;
	}
	return seperatorcounter;
}

// Inclusive
char* chopstring(char* str, int startindex, int endindex)
{
	int allocatedcounter = 0;
	char* stringtoallocate = malloc(sizeof(char) * ((endindex - startindex) + 1));

	int counter = startindex;
	while(counter <= endindex)
	{
		*(stringtoallocate + allocatedcounter) = *(str + counter);
		++counter;
	}
	return stringtoallocate;
}

char **ft_split(char *str, char *charset)
{
	// +1 due to null string at the end
	int stringcount = countinstancesofseperatedchars(str, charset) + 1;
	char** stringholder = malloc(sizeof(char) * stringcount);

	int stringcounter = 0;
	int lastindex = 0;
	while( stringcounter < stringcount)
	{
		int chopto = getnextindexatseparatorfrom(str, lastindex, charset);
		*(stringholder + stringcounter) = chopstring(str, lastindex, chopto);
		lastindex = chopto;

		++stringcounter;
	}
	*(stringholder + stringcounter) = NULL;
	return stringholder;
}