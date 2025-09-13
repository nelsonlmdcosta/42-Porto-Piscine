/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:23:50 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:55:57 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_uppercase_alpha(char character)
{
	return ((character >= 'A') && (character <= 'Z'));
}

int	is_lowercase_alpha(char character)
{
	return ((character >= 'a' ) && (character <= 'z'));
}

/*
 * Uses Utility Functions To Verify If A Character Is In A Specific Range Of
 * 		Upper Or Lower case, if it is then we return 1 otherwise 0
 */
int	ft_str_is_alpha(char *str)
{
	while (*(str) != '\0')
	{
		if (!(is_uppercase_alpha(*str) || is_lowercase_alpha(*str)))
			return (0);
		++str;
	}
	return (1);
}

/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_str_is_alpha("asdafasfsa"));
	printf("%d\n", ft_str_is_alpha("!dasd "));
	printf("%d\n", ft_str_is_alpha("sad{}}"));
	printf("%d\n", ft_str_is_alpha(""));

	return 0;
}*/