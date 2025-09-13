/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:12:03 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 16:15:57 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strlen(char *str);

int main(void)
{
	char *s1 = "";
	printf("Test 1 (Empty string): got %d, expected %llu\n", ft_strlen(s1), strlen(s1));

	char *s2 = "A";
	printf("Test 2 (Single character): got %d, expected %llu\n", ft_strlen(s2), strlen(s2));

	char *s3 = "Hello";
	printf("Test 3 (Normal word): got %d, expected %llu\n", ft_strlen(s3), strlen(s3));

	char *s4 = "Hello, world!";
	printf("Test 4 (With spaces and punctuation): got %d, expected %llu\n", ft_strlen(s4), strlen(s4));

	char *s5 = "This is a much longer test string to check the length function.";
	printf("Test 5 (Long string): got %d, expected %llu\n", ft_strlen(s5), strlen(s5));

	return 0;
}