/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 19:27:47 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/04 21:39:41 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

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
}
