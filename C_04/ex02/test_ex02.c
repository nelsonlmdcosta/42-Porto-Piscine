/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:12:16 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 16:37:07 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

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
}