/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 21:31:25 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 16:07:36 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Find The Length Of Dest Then Copy Across N Characters and Null Terminates
 */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_length;
	unsigned int	src_offset;

	dest_length = 0;
	src_offset = 0;
	while (*(dest + dest_length) != '\0')
		dest_length++;
	while (src_offset < nb && *(src + src_offset) != '\0')
	{
		*(dest + dest_length) = *(src + src_offset);
		dest_length++;
		src_offset++;
	}
	*(dest + dest_length) = '\0';
	return (dest);
}

/*#include <stdio.h>

int main(void)
{
	char buffer1[50] = "Hello";
	char buffer2[50] = "Foo";
	char buffer3[50] = "";

	printf("Test 1: Append with limit (nb = 3)\n");
	ft_strncat(buffer1, " World", 3);
	printf("Result: \"%s\"\n\n", buffer1);  // "Hello Wo"

	printf("Test 2: Append full string (nb = 10)\n");
	ft_strncat(buffer2, "BarBaz", 10);
	printf("Result: \"%s\"\n\n", buffer2);  // "FooBarBaz"

	printf("Test 3: Append to empty dest\n");
	ft_strncat(buffer3, "Content", 4);
	printf("Result: \"%s\"\n\n", buffer3);  // "Cont"

	return 0;
}*/