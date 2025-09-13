/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 12:03:21 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/11 18:15:05 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int main(void)
{
	printf("Decimal base:\n");
	printf("%d\n", ft_atoi_base("42", "0123456789"));   // 42
	printf("%d\n", ft_atoi_base("-42", "0123456789"));  // -42

	printf("Binary base:\n");
	printf("%d\n", ft_atoi_base("101010", "01"));       // 42
	printf("%d\n", ft_atoi_base("-1000", "01"));        // -8

	printf("Hex base:\n");
	printf("%d\n", ft_atoi_base("FF", "0123456789ABCDEF"));   // 255
	printf("%d\n", ft_atoi_base("-FF", "0123456789ABCDEF"));  // -255

	printf("Custom base (poneyvif):\n");
	printf("%d\n", ft_atoi_base("yen", "poneyvif"));    // some int
	printf("%d\n", ft_atoi_base("-yen", "poneyvif"));

	printf("With whitespace and signs:\n");
	printf("%d\n", ft_atoi_base("   \t\n  ---+--+101", "01")); // should parse sign and give -5

	printf("Invalid bases:\n");
	printf("%d\n", ft_atoi_base("42", ""));             // 0
	printf("%d\n", ft_atoi_base("42", "0"));            // 0
	printf("%d\n", ft_atoi_base("42", "01+"));          // 0
	printf("%d\n", ft_atoi_base("42", "112345"));       // 0

	return 0;
}
