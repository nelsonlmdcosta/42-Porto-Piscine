/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:24:32 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:55:09 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Copies from the source string to the destination buffer, is prone to errors
 */
char	*ft_strcpy(char *dest, char *src)
{
	char	*mutabledestination;

	mutabledestination = dest;
	while (*(src) != '\0')
	{
		*(mutabledestination)++ = *src++;
	}
	return (dest);
}

/*#include <stdio.h>

int main(void)
{
	char src[] = "Hello World!";
	char dest[256];

	printf("%s\n", src);
	printf("%s\n", dest);

	ft_strcpy(dest, src);

	printf("%s\n", src);
	printf("%s\n", dest);

	printf("%s\n", *(dest + 13) == '\0' ? "Yes" : "No");
	return 0;
}*/