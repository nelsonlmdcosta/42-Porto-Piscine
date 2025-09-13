/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:22:59 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:57:36 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*(str) != '\0')
	{
		if (*str < 'a' || *str++ > 'z' )
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int main(void)
{
	printf("%d", ft_str_is_lowercase("adasdsad"));
	printf("%d", ft_str_is_lowercase("!d123 "));
	printf("%d", ft_str_is_lowercase("123sad{}}"));
	printf("%d", ft_str_is_lowercase(""));
	printf("%d", ft_str_is_lowercase("ASadsaS"));

	return 0;
}*/