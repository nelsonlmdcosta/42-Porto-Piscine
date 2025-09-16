/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 11:24:00 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/16 10:25:45 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

/*
 * 	Total Length Is The Size Of Each String + Size Of Seperators + \0
 */
int	get_total_length(char **strs, int size, char *sep)
{
	int	word_index;
	int	total;

	total = 0;
	word_index = 0;
	while (word_index < size)
	{
		total += ft_strlen(strs[word_index]);
		if (word_index < size - 1)
			total += ft_strlen(sep);
		word_index++;
	}
	return (total + 1);
}

/*
 * 	Copies Current Word, Then Copies The Seperator As Long As It's Not The Last
 * 		one then null terminates it.
 */
void	copy_to_buffer(char **strs, int size, char *sep, char *buffer)
{
	int	word_index;
	int	char_index;
	int	buffer_index;

	buffer_index = 0;
	word_index = 0;
	while (word_index < size)
	{
		char_index = 0;
		while (strs[word_index][char_index])
			buffer[buffer_index++] = strs[word_index][char_index++];
		if (word_index < size - 1)
		{
			char_index = 0;
			while (sep[char_index])
				buffer[buffer_index++] = sep[char_index++];
		}
		word_index++;
	}
	buffer[buffer_index] = '\0';
}

/*
 * 	If size is 0 returns a 1 character string back to free whenever
 *
 *	Otherwise will figure out the full size, allocate the buffer then
 *		copy the strings into said buffer.
 */
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	char	*buffer;

	if (size == 0)
	{
		buffer = malloc(1);
		if (!buffer)
			return (NULL);
		buffer[0] = '\0';
		return (buffer);
	}
	total_len = get_total_length(strs, size, sep);
	buffer = malloc(total_len);
	if (!buffer)
		return (NULL);
	copy_to_buffer(strs, size, sep, buffer);
	return (buffer);
}

/*
#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(int argc, char** argv)
{
char* buffer = ft_strjoin(argc, argv, ", ");
printf("Concatenated Input: %s\n", buffer);
return 0;
}*/