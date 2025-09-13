/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:30:55 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 19:25:11 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Result starts at one, simple enough that it requires you to multiply
 * 		Multiply anything by zero you get ... you guessed it zero! :D
 *
 * Negative powers don't make much sense, and the rest is computed powers
 * 		aka multiplying the result by itself aka nb
 */
int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	while (power-- > 0)
		result *= nb;
	return (result);
}

/*
#include <unistd.h>

// The amount of repetition made me just copy paste these already written
// 		functions CBA to keep rewriting them >_<
//
//		ft_putchar, ft_putstr and ft_putnbr everything we've seen so far
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
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
			ft_putnbr(ft_iterative_power(bases[i], powers[j]));
			ft_putchar('\n');
		}
	}
	return 0;
}*/
