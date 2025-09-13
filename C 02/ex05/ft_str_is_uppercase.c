/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:22:38 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:58:15 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*(str) != '\0')
	{
		if (*str < 'A' || *str++ > 'Z' )
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>

int main(void)
{
	printf("%d", ft_str_is_uppercase("ASDSAFS"));
	printf("%d", ft_str_is_uppercase("!d123 "));
	printf("%d", ft_str_is_uppercase("123sad{}}"));
	printf("%d", ft_str_is_uppercase(""));
	printf("%d", ft_str_is_uppercase("ASadsaS"));

	return 0;
}*/