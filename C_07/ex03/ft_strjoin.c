/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 11:24:00 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/12 12:26:09 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(const char *string)
{
	int counter;

	counter = 0;
	while(*(string + counter) != '\0')
		counter++;
	return counter;
}

int getlengthinarrayofstringsincludingseperator(char **strs, int arraylen, int seperatorsize )
{
	int counter;
	int buffersize;

	counter = 0;
	buffersize = 0;
	while(counter < arraylen)
	{
		buffersize += ft_strlen(*(strs + counter));
		if(counter < arraylen-1)
		{
			buffersize += seperatorsize;
		}
		++counter;
	}
	return buffersize;
}

int allocateandcopystrsintobuffer(char **strs, int arraylen, char* buffer, char* seperator, int seperatorsize)
{
	int counter = 0;
	int buffercounter = 0;
	int sourcecounter = 0;
	int separatorcounter = 0;
	while(counter < arraylen)
	{
		char* currentsource = *(strs + counter);
		int sourcesize = ft_strlen(currentsource);

		sourcecounter = 0;
		while(sourcecounter < sourcesize)
		{
			*(buffer + buffercounter) = *(currentsource + sourcecounter);
			++buffercounter;
			++sourcecounter;
		}
		++counter;

		if(counter < arraylen)
		{
			separatorcounter = 0;
			while(separatorcounter < seperatorsize)
			{
				*(buffer + buffercounter) = *(seperator + separatorcounter);
				++buffercounter;
				++separatorcounter;
			}
		}
	}
	*(buffer + buffercounter) = '\0';

	return 1;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int seperatorsize;
	int buffersize;
	char* buffer;

	if(size == 0)
	{
		buffer = malloc(sizeof(char) * 1);
		buffer[0] = '\0';
		return buffer;
	}

	seperatorsize = ft_strlen(sep);
	buffersize = getlengthinarrayofstringsincludingseperator(strs, size, seperatorsize);
	buffer = malloc(sizeof(char) * buffersize);

	if(!allocateandcopystrsintobuffer(strs, size, buffer, sep, seperatorsize))
	{
		buffer[0] = '\0';
		return buffer;
	}
	return buffer;
}