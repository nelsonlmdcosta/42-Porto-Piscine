/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 12:03:51 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 19:33:45 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index);

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
	int test_indices[] = {-5, 0, 1, 2, 3, 4, 5, 10, 15};
	int num_tests = sizeof(test_indices) / sizeof(test_indices[0]);

	for (int i = 0; i < num_tests; i++)
	{
		int idx = test_indices[i];
		ft_putstr("Fibonacci(");
		ft_putnbr(idx);
		ft_putstr(") = ");
		ft_putnbr(ft_fibonacci(idx));
		ft_putchar('\n');
	}

	return 0;
}