/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 19:51:49 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/14 17:05:20 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	From people smarter than myself, a divisor for a prime number can only found
 *		when less than the Square Root of the number itself.
 *
 *	So taking that into consideration, we start from 2 and work up towards the
 *		upper limit. This upper limit is the sqrt of the number. So we start
 *		squaring the number upwards until we reach above the target number
 *
 * 	Taking that into consideration we then do a modulo, if it's 0 it's a valid
 * 		divisor therefore a combination for dividing the number aka NOT a prime
 *
 * 	Otherwise if it survives the while loop it is the prime!
 *
 * 	Some people are so smort ...
 *
 *	Sauce:
 *	https://tinyurl.com/geek4g
 *	https://tinyurl.com/primeoverflow
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
}*/