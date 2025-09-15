/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 12:27:10 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/15 21:40:37 by nluis-mo         ###   ########.fr       */
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
int	countinstancesofseperatedchars(const char *str, const char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (ischaracteraseperator(*str, (char *)charset))
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
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
	if (!stringholder)
		return (NULL);
	lastindex = 0;
	stringcounter = 0;
	while (stringcounter < totalstrings)
	{
		while (str[lastindex] != '\0'
			&& ischaracteraseperator(str[lastindex], charset))
			++lastindex;
		chopto = getnextindexatseparatorfrom(str, lastindex, charset);
		if (chopto > lastindex)
			stringholder[stringcounter++] = chopstring(str, lastindex, chopto);
		lastindex = chopto;
	}
	stringholder[stringcounter] = NULL;
	return (stringholder);
}
