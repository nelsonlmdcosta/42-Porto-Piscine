/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex07.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 12:03:51 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 20:21:23 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

int main(void)
{
	int tests[] = {-5, 0, 1, 2, 3, 8, 14, 17, 18, 80};
	int num_tests = sizeof(tests) / sizeof(tests[0]);

	for (int i = 0; i < num_tests; i++)
	{
		int n = tests[i];
		printf("Next prime >= %d is %d\n", n, ft_find_next_prime(n));
	}

	return 0;
}
