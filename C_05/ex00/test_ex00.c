/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 12:03:51 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/16 16:30:25 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_iterative_factorial(int nb);

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
	int tests[] = {-5, 0, 1, 2, 5, 10, 20};
	for (int i = 0; i < 7; i++) {
		ft_putstr("Test: ");
		ft_putnbr(tests[i]);
		ft_putstr("! = ");
		ft_putnbr(ft_iterative_factorial(tests[i]));
		ft_putchar('\n');
	}
	return 0;
}
