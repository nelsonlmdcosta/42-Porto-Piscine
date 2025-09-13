/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:22:09 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:59:00 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*(str) != '\0')
	{
		if (*str < ' ' || *str++ > '~' )
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>

int main(void)
{
	printf("%d", ft_str_is_printable("ASDSAFS"));
	printf("%d", ft_str_is_printable("!d123 "));
	printf("%d", ft_str_is_printable("123sad{}}"));
	printf("%d", ft_str_is_printable(""));
	printf("%d", ft_str_is_printable("ASadsaS"));

	char specialtest[3];
	specialtest[0] = 12;
	specialtest[1] = 0;
	specialtest[2] = 48;
	printf("%d", ft_str_is_printable(specialtest));


	return 0;
}*/