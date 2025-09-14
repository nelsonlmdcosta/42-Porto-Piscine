/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:24:18 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/14 16:53:57 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*
#include <unistd.h>

int ft_recursive_factorial(int nb);

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
		ft_putnbr(ft_recursive_factorial(tests[i]));
		ft_putchar('\n');
	}
	return 0;
}*/
