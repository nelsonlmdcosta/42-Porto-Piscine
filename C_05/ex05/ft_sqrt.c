/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 19:38:05 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 19:50:31 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * 	Negative Numbers are considered irrational so we return 0
 *
 * 	Sqrt of 0 or 1 it returns itself
 *
 * 	The loop works a bit on the inversion of the logic, so instead of long
 * 		division we look for nb * nb, we do this till the halfway point
 * 		because well mathmatically doesnt make sense to go higher
 * 		sqrt(25) is 5, so if we go up checking multiples until we go over
 * 		our specific number.
 */
int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int main(void)
{
	int tests[] = {-4, 0, 1, 2, 4, 8, 9, 16, 20, 25, 26};
	int num_tests = sizeof(tests) / sizeof(tests[0]);

	for (int i = 0; i < num_tests; i++)
	{
		ft_putstr("sqrt(");
		ft_putnbr(tests[i]);
		ft_putstr(") = ");
		ft_putnbr(ft_sqrt(tests[i]));
		ft_putchar('\n');
	}

	return 0;
}*/