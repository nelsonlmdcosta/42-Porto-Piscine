/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 07:49:11 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/13 13:30:59 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int main(void)
{
	char *res;

	res = ft_convert_base("   ---101010", "01", "0123456789");
	printf("%s\n", res); // should print -42
	free(res);

	res = ft_convert_base("  +2A", "0123456789ABCDEF", "01234567");
	printf("%s\n", res); // should print 52
	free(res);

	res = ft_convert_base("   -42", "0123456789", "0123456789ABCDEF");
	printf("%s\n", res); // should print -2A
	free(res);

	return (0);
}