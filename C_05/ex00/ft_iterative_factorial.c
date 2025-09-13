/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:12:30 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 17:26:06 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Factorial is defined as 5! where it's essentially just a chain of
 * 		multiplication in descending order till 1
 * 		so 5! would be 5 x 4 x 3 x 2 x 1 = 120
 */
int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
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
	int tests[] = {-5, 0, 1, 2, 5, 10};
	for (int i = 0; i < 6; i++) {
		ft_putstr("Test: ");
		ft_putnbr(tests[i]);
		ft_putstr("! = ");
		ft_putnbr(ft_iterative_factorial(tests[i]));
		ft_putchar('\n');
	}
	return 0;

}*/