/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 12:03:21 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/11 19:11:29 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Prototype of your function
void ft_putnbr_base(int nbr, char *base);

int main(void)
{
	// Decimal tests
	write(1, "Decimal (base 10):\n", 19);
	ft_putnbr_base(42, "0123456789");      // expected: 42
	write(1, "\n", 1);
	ft_putnbr_base(-42, "0123456789");     // expected: -42
	write(1, "\n\n", 2);

	// Binary tests
	write(1, "Binary (base 2):\n", 17);
	ft_putnbr_base(255, "01");             // expected: 11111111
	write(1, "\n", 1);
	ft_putnbr_base(-8, "01");              // expected: -1000
	write(1, "\n\n", 2);

	// Hexadecimal tests
	write(1, "Hexadecimal (base 16):\n", 23);
	ft_putnbr_base(255, "0123456789ABCDEF"); // expected: FF
	write(1, "\n", 1);
	ft_putnbr_base(-255, "0123456789ABCDEF"); // expected: -FF
	write(1, "\n\n", 2);

	// Custom octal-like system (poneyvif)
	write(1, "Custom base (poneyvif):\n", 24);
	ft_putnbr_base(125, "poneyvif");       // exercise example
	write(1, "\n", 1);
	ft_putnbr_base(-125, "poneyvif");
	write(1, "\n\n", 2);

	// Edge cases
	write(1, "Edge cases:\n", 11);
	ft_putnbr_base(0, "0123456789");       // expected: 0
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "0123456789"); // expected: -2147483648
	write(1, "\n", 1);
	ft_putnbr_base(2147483647, "0123456789");  // expected: 2147483647
	write(1, "\n\n", 2);

	// Invalid bases
	write(1, "Invalid bases (should print nothing):\n", 38);
	ft_putnbr_base(42, "");                // nothing
	write(1, "\n", 1);
	ft_putnbr_base(42, "0");               // nothing
	write(1, "\n", 1);
	ft_putnbr_base(42, "012+3");           // nothing
	write(1, "\n", 1);
	ft_putnbr_base(42, "1123456789");      // nothing (duplicate)
	write(1, "\n", 1);

	return (0);
}