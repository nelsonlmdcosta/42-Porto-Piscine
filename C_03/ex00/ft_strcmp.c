/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 19:30:29 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 16:09:13 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assuming basic ascii instead of ascii 127 norm instead of the
 * extended ascii of 256 unsigned chars, would just need to cast
 * on the subtraction calculation
 *
 * This just goes through the loop if it reaches the end then it's
 * the same, otherwise it'll stop at a difference and return that
 * difference
 */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*(s1 + i) && *(s2 + i) && *(s1 + i) == *(s2 + i))
		i++;
	return (*(s1 + i) - *(s2 + i));
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *tests[][2] = {
			{"Hello", "Hello"},
			{"Hello", "Hell"},
			{"Hell", "Hello"},
			{"abc", "abd"},
			{"abd", "abc"},
			{"Aello", "zorld"},
	};

	int num_tests = sizeof(tests) / sizeof(tests[0]);

	for (int i = 0; i < num_tests; i++)
	{
		int res = ft_strcmp(tests[i][0], tests[i][1]);
		printf("ft_strcmp(\"%s\", \"%s\") = %d\n",
			   tests[i][0], tests[i][1], res);
	}
}*/