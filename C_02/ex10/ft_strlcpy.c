/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:20:34 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 16:01:03 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Copies n chars into the destination buffer, and null terminates it, then it
 * checks for the length (could be more optimal) and returns that length of the
 * string they tried to copy, if any
 */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>

int main(void)
{
	char src[] = "Hello, World!";
	char dest[10];
	unsigned int len;

	len = ft_strlcpy(dest, src, 10);

	printf("Copied string: %s\n", dest);
	printf("Length of dest: %d\n", 10);
	printf("Length of src: %u\n", len);
	printf("Copied from src: %d\n", 10);

	return 0;
}*/