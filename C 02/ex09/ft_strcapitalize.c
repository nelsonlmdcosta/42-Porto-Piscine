/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:20:57 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 16:00:42 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanumeric(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

int	is_characterlowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_characteruppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (is_alphanumeric(str[i]))
		{
			if (new_word)
			{
				if (is_characterlowercase(str[i]))
					str[i] = str[i] - ('a' - 'A');
				new_word = 0;
			}
			else if (is_characteruppercase(str[i]))
				str[i] = str[i] + ('a' - 'A');
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int main(void)
{
	char str[] = "hi, how are you? 42words forty-two; fifty+and+one";

	printf("%s\n", ft_strcapitalize(str));

	return 0;
}*/