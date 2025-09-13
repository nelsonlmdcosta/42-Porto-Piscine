/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:34:04 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:48:28 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Returns the size of a c-style string that is null terminated
 */
int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*(str + counter) != '\0')
	{
		++counter;
	}
	return (counter);
}

/*
#include <stdio.h>

int main()
{
	char* string1 = "Hello World!";
	char* string2 = "What A Great Day It Is Today!!";
	char* string3 = "Bye!";

	printf("String: %s, Has Length of: %d\n", string1, ft_strlen(string1));
	printf("String: %s, Has Length of: %d\n", string2, ft_strlen(string2));
	printf("String: %s, Has Length of: %d\n", string3, ft_strlen(string3));
}*/
