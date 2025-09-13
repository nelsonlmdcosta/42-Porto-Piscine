/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 19:27:47 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 16:06:23 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcat(char *dst, char *src, unsigned int size);

int main(void)
{
	// Test 1: enough space for full append
	{
		char dst[20] = "Hello, ";
		char src[] = "World!";
		unsigned int ret = ft_strlcat(dst, src, sizeof(dst));
		printf("Test 1\n");
		printf("dst: '%s', return: %u\n", dst, ret);
	}

	// Test 2: not enough space (truncation)
	{
		char dst[10] = "Hello, ";
		char src[] = "World!";
		unsigned int ret = ft_strlcat(dst, src, sizeof(dst));
		printf("\nTest 2\n");
		printf("dst: '%s', return: %u\n", dst, ret);
	}

	// Test 3: dst length >= size, no append possible
	{
		char dst[5] = "Hello"; // buffer full
		char src[] = "World!";
		unsigned int ret = ft_strlcat(dst, src, sizeof(dst));
		printf("\nTest 3\n");
		printf("dst: '%s', return: %u\n", dst, ret);
	}

	// Test 4: empty dst
	{
		char dst[10] = "";
		char src[] = "Test";
		unsigned int ret = ft_strlcat(dst, src, sizeof(dst));
		printf("\nTest 4\n");
		printf("dst: '%s', return: %u\n", dst, ret);
	}

	// Test 5: empty src
	{
		char dst[10] = "Hello";
		char src[] = "";
		unsigned int ret = ft_strlcat(dst, src, sizeof(dst));
		printf("\nTest 5\n");
		printf("dst: '%s', return: %u\n", dst, ret);
	}

	// Test 6: size = 0 (edge case)
	{
		char dst[10] = "Hello";
		char src[] = "World";
		unsigned int ret = ft_strlcat(dst, src, 0);
		printf("\nTest 6\n");
		printf("dst: '%s', return: %u\n", dst, ret);
	}

	return 0;
}