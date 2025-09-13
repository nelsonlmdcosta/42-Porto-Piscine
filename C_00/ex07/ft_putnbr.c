/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 23:03:48 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:39:03 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <io.h>

/*
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
int main()
{
	ft_putnbr(42);
	write(1, "\n", 1);

	ft_putnbr(-2147483648);
	write(1, "\n", 1);

	ft_putnbr(2147483647);
	write(1, "\n", 1);

	ft_putnbr(0);
	write(1, "\n", 1);

	ft_putnbr(-124);
	write(1, "\n", 1);

	ft_putnbr(1024);

	return 0;
}*/