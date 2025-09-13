/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 16:10:53 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 16:40:24 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Copied this from C00 - ex07
 * Prints out a number, recursively onto the screen. Essentially just removes
 * 		the last number by dividing by 10, and we then on the way back down
 * 		the stack just use the modulo to print out the number in a specific
 * 		position
 *
 * Worth noting this takes into account the special case of INT_MIN, where
 * 		you can't just convert it to a positive as it would cause an overflow
 * 		We could also alternatively change it to a long, but unsure we're
 * 		expected to do that or not.
 */
void	ft_putnbr(int nb)
{
	char	output;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	output = (nb % 10) + '0';
	write(1, &output, 1);
}

/*
 * Previous Excercise To Help
 */
/*
void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (*(str + counter) != '\0')
		++counter;
	write(1, str, counter);
}

int main(void)
{
	ft_putstr("Test 1: ");
	ft_putnbr(0);
	ft_putstr("\n");

	ft_putstr("Test 2: ");
	ft_putnbr(42);
	ft_putstr("\n");

	ft_putstr("Test 3: ");
	ft_putnbr(-42);
	ft_putstr("\n");

	ft_putstr("Test 4: ");
	ft_putnbr(2147483647);
	ft_putstr("\n");

	ft_putstr("Test 5: ");
	ft_putnbr(-2147483648);
	ft_putstr("\n");

	return 0;
}*/