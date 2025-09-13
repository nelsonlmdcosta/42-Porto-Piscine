/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:31:14 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 19:30:29 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Negative powers don't make much sense, and the rest is computed powers
 * 		aka multiplying the result by itself aka nb
 *
 * The if check for == 0 is essentially the equivalent of a starting point
 * 		So it returns one similar to how result starts at one in the previous
 * 		example
 *
 * Otherwise it'll recursively call itself till it hits that threshold and
 * 		return up the stack the result
 */
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
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
	int bases[] = {2, 3, 5, -2, 0};
	int powers[] = {0, 1, 3, 4, -1};

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			ft_putstr("Test: ");
			ft_putnbr(bases[i]);
			ft_putstr("^");
			ft_putnbr(powers[j]);
			ft_putstr(" = ");
			ft_putnbr(ft_recursive_power(bases[i], powers[j]));
			ft_putchar('\n');
		}
	}
	return 0;
}*/
