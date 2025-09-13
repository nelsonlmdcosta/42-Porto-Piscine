/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:23:25 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:56:49 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*(str) != '\0')
	{
		if (*str < '0' || *str++ > '9' )
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>

int main(void)
{
	printf("%d", ft_str_is_numeric("0193812412"));
	printf("%d", ft_str_is_numeric("!d123 "));
	printf("%d", ft_str_is_numeric("123sad{}}"));
	printf("%d", ft_str_is_numeric(""));

	return 0;
}*/