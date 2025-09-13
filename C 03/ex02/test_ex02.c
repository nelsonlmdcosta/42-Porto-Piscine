/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 19:27:47 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/04 21:22:32 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src);

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
}
