/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:24:10 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:55:21 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Copies only n characters, does not guarantee a null terminated string after
 * 		copying the specific data from src. Good for inplace edits
 */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int				usefill;
	unsigned int	counter;

	usefill = 0;
	counter = 0;
	while (counter < n)
	{
		if (*(src + counter) == '\0')
			usefill = 1;
		if (usefill == 0)
			*(dest + counter) = *(src + counter);
		else
			*(dest + counter) = '\0';
		++counter;
	}
	return (dest);
}

/*
#include <stdio.h>

int main(void)
{
	int totalstringtocopy = 5;
	char src[] = "Hello World!";
	char dest[totalstringtocopy + 1];

	printf("%s\n", src);
	printf("%s\n", dest);

	ft_strncpy(dest, src+9, totalstringtocopy);

	printf("%s\n", src);
	printf("%s\n", dest);

	return 0;
}*/