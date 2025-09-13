/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 22:16:51 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 16:05:21 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * This was bloody annoying to figure out exactly what was expected but here we
 * 		are, so following a page that is not the man to try get a better
 * 		understanding https://surl.li/sbrbyn // From Developer ARM strlcat
 * 		(ShortLink otherwise search for the comment after)
 *
 * Weird function, only writes to dst, if there is space, otherwise reports
 * 		the expected size of the concatenation
 *
 * Ties to compute the lengths of the buffers, without going past the copy size
 *
 * If by chance the size < destinations legnth then we exit early and let the
 * 		user know how much space we need
 *
 * Otherwise do the appending
 *
 * NOTE: That size is the size of the dst buffer, or the expected value of it
 * 		assuming the user input it correctly
 */
unsigned int	ft_strlcat(char *dst, char *src, unsigned int size)
{
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	src_index;

	dst_len = 0;
	src_len = 0;
	src_index = 0;
	while (dst_len < size && *(dst + dst_len) != '\0')
		dst_len++;
	while (*(src + src_len) != '\0')
		src_len++;
	if (size <= dst_len)
		return (size + src_len);
	while (*(src + src_index) != '\0' && (dst_len + src_index) < size - 1)
	{
		*(dst + dst_len + src_index) = *(src + src_index);
		src_index ++;
	}
	if (dst_len + src_index < size)
		*(dst + dst_len + src_index) = '\0';
	return (dst_len + src_len);
}

/*#include <stdio.h>

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
}*/