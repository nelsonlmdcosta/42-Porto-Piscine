/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 20:16:27 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 20:21:43 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Same As ex06
 */
int	ft_is_prime(int nb)
{
	int	divisor;
	int	remainder;

	if (nb <= 1)
		return (0);
	divisor = 2;
	while (divisor * divisor <= nb)
	{
		remainder = nb % divisor;
		if (remainder == 0)
			return (0);
		divisor++;
	}
	return (1);
}

/*
 * At this time it's not worth smart thinking. There's probably a better solution
 * 		Im Just Going To Be Lazy And Check Upwards Till We Find One
 */
int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*
#include <stdio.h>

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
}*/