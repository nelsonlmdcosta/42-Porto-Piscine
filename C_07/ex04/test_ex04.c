/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 07:49:11 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/14 19:26:27 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int main(void)
{
	char *result;

	/* ✅ Simple conversions */
	result = ft_convert_base("42", "0123456789", "01");
	printf("42 (dec) -> bin: %s\n", result); free(result);

	result = ft_convert_base("101010", "01", "0123456789");
	printf("101010 (bin) -> dec: %s\n", result); free(result);

	result = ft_convert_base("2A", "0123456789ABCDEF", "01234567");
	printf("2A (hex) -> oct: %s\n", result); free(result);

	/* ✅ Signs and whitespace */
	result = ft_convert_base("-42", "0123456789", "0123456789ABCDEF");
	printf("-42 (dec) -> hex: %s\n", result); free(result);

	result = ft_convert_base("   ---++--101010", "01", "0123456789");
	printf("messy signs bin -> dec: %s\n", result); free(result);

	/* ✅ Zero handling */
	result = ft_convert_base("0", "0123456789", "01");
	printf("0 (dec) -> bin: %s\n", result); free(result);

	result = ft_convert_base("0000", "0123456789", "0123456789");
	printf("0000 (dec) -> dec: %s\n", result); free(result);

	/* ✅ Edge values */
	result = ft_convert_base("-2147483648", "0123456789", "0123456789ABCDEF");
	printf("INT_MIN -> hex: %s\n", result); free(result);

	result = ft_convert_base("2147483647", "0123456789", "0123456789ABCDEF");
	printf("INT_MAX -> hex: %s\n", result); free(result);

	/* ✅ Invalid bases */
	result = ft_convert_base("42", "0", "0123456789");
	printf("invalid base_from too short -> %s\n", result ? result : "NULL");
	free(result);

	result = ft_convert_base("42", "012+3456789", "0123456789");
	printf("invalid base_from with + -> %s\n", result ? result : "NULL");
	free(result);

	result = ft_convert_base("42", "0123456789", "1123456789");
	printf("invalid base_to with duplicate -> %s\n", result ? result : "NULL");
	free(result);

	/* ✅ Invalid input */
	result = ft_convert_base("ZZZ", "0123456789ABCDEF", "01");
	printf("invalid number ZZZ -> %s\n", result ? result : "NULL");
	free(result);

	result = ft_convert_base("", "0123456789", "01");
	printf("empty string -> %s\n", result ? result : "NULL");
	free(result);

	return (0);
}
