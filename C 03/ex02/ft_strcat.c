/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 21:16:41 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 16:07:59 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Find Length Of Dest Then Appends Src To The End, This Does Nothing To Check
 * 		The Size Of The Buffer So Can Lead To Undefined Behaviour or SEGVs
 */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		*(dest + i++) = *(src + j++);
	}
	*(dest + i) = '\0';
	return (dest);
}

/*
#include <stdio.h>

int main(void)
{
	char buffer1[50] = "Hello";
	char buffer2[50] = "";
	char buffer3[50] = "Already text";

	printf("Test 1: Simple append\n");
	ft_strcat(buffer1, " World");
	printf("Result: \"%s\"\n\n", buffer1);

	printf("Test 2: Append to empty string\n");
	ft_strcat(buffer2, "First!");
	printf("Result: \"%s\"\n\n", buffer2);

	printf("Test 3: Append empty string\n");
	ft_strcat(buffer1, "");
	printf("Result: \"%s\"\n\n", buffer1);

	printf("Test 4: Multiple appends\n");
	ft_strcat(buffer3, " + more");
	ft_strcat(buffer3, " + even more");
	printf("Result: \"%s\"\n\n", buffer3);

	return 0;
}*/