/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex06.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 12:03:51 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 19:56:42 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb);

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
	int tests[] = {0, 1, 2, 3, 4, 5, 16, 17, 19, 20, 23, 24};
	int num_tests = sizeof(tests) / sizeof(tests[0]);

	for (int i = 0; i < num_tests; i++)
	{
		ft_putstr("Is ");
		ft_putnbr(tests[i]);
		ft_putstr(" prime? ");
		ft_putnbr(ft_is_prime(tests[i]));
		ft_putchar('\n');
	}

	return 0;
}