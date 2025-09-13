/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 19:59:43 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 16:08:40 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Strncmp, needs to check explicitly for no n = 0 and does essencially
 * what strcmp does.
 */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && *(s1 + i) && *(s2 + i) && *(s1 + i) == *(s2 + i))
		i++;
	return (*(s1 + i) - *(s2 + i));
}

/*
#include <stdio.h>

int main(void)
{
	char *tests[][2] = {
			{"Hello", "Hello"},
			{"Hello", "Hell"},
			{"Hell", "Hello"},
			{"abc", "abd"},   // first 2 chars match
			{"abc", "abd"},   // full compare
			{"abcdef", "abcxyz"}, // first 3 chars match
			{"abcdef", "abcxyz"}, // difference at 4th char
	};
	unsigned int testsnum[7] = { 5, 5, 5, 2, 3, 3, 4 };

	int num_tests = sizeof(tests) / sizeof(tests[0]);

	for (int i = 0; i < num_tests; i++)
	{
		int res = ft_strncmp(tests[i][0], tests[i][1], testsnum[i]);
		printf("ft_strncmp(\"%s\", \"%s\", %u) = %d\n",
			   tests[i][0], tests[i][1], testsnum[i], res);
	}

	return 0;
}*/