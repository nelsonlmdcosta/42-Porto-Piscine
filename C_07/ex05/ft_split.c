/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 12:27:10 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/14 20:33:53 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
 * Checks to see if the character is considered a seperator
 */
int	ischaracteraseperator(char charactertocheck, char *charset)
{
	int	counter;

	counter = 0;
	while (*(charset + counter) != '\0')
	{
		if (charactertocheck == *(charset + counter++))
			return (1);
	}
	return (0);
}

/*
 * Gets the next seperator index from where we are starting
 */
int	getnextindexatseparatorfrom(char *str, int startindex, char *charset)
{
	int	counter;

	counter = startindex;
	while (*(str + counter))
	{
		if (ischaracteraseperator(*(str + counter), charset))
		{
			break ;
		}
		++counter;
	}
	return (counter);
}

/*
 * Counts instances of words depending on how many seperators tehre are
 * 		Technically should
 */
int	countinstancesofseperatedchars(char *str, char *charset)
{
	int	pointercounter;
	int	seperatorcounter;

	pointercounter = 0;
	seperatorcounter = 1;
	while (*(str + pointercounter) != '\0')
	{
		if (ischaracteraseperator(*(str + pointercounter), charset))
		{
			while (*(str + pointercounter) != '\0'
				&& ischaracteraseperator(*(str + pointercounter), charset))
			{
				++pointercounter;
			}
			++seperatorcounter;
			continue ;
		}
		++pointercounter;
	}
	return (seperatorcounter);
}

/*
 * Chops a string from to index returns in an allocated buffer
 */
char	*chopstring(char *str, int startindex, int endindex)
{
	int		counter;
	int		allocatedcounter;
	char	*stringtoallocate;

	stringtoallocate = malloc(sizeof(char) * ((endindex - startindex) + 1));
	allocatedcounter = 0;
	counter = startindex;
	while (counter < endindex)
	{
		*(stringtoallocate + allocatedcounter++) = *(str + counter++);
	}
	*(stringtoallocate + allocatedcounter) = '\0';
	return (stringtoallocate);
}

/*
 * Splitter, allocates the array of char* then fills them up with the appropriate
 * 		data given by chopto
 */
char	**ft_split(char *str, char *charset)
{
	int		chopto;
	int		lastindex;
	int		stringcounter;
	int		totalstrings;
	char	**stringholder;

	totalstrings = countinstancesofseperatedchars(str, charset);
	stringholder = malloc(sizeof(char *) * (totalstrings + 1));
	lastindex = 0;
	stringcounter = 0;
	while (stringcounter < totalstrings)
	{
		chopto = getnextindexatseparatorfrom(str, lastindex, charset);
		*(stringholder + stringcounter++) = chopstring(str, lastindex, chopto);
		while (str[chopto] != '\0'
			&& ischaracteraseperator(str[chopto], charset))
			++chopto;
		lastindex = chopto;
	}
	*(stringholder + stringcounter) = NULL;
	return (stringholder);
}
