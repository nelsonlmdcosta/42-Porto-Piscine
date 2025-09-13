/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 19:27:47 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 16:09:01 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

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
}