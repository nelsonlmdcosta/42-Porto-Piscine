/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:21:23 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 16:00:03 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*returnaddress;

	returnaddress = str;
	while (*(str) != '\0')
	{
		if ((*str) >= 'A' && *str <= 'Z' )
		{
			*str = *str + 32;
		}
		++str;
	}
	return (returnaddress);
}

/*
#include <stdio.h>

int main(void)
{
	char mutablestring1[] = "123sad{}}";
	char mutablestring2[] = "";
	char mutablestring3[] = "ASadsaS";

	printf("%s", ft_strlowcase(mutablestring1));
	printf("%s", ft_strlowcase(mutablestring2));
	printf("%s", ft_strlowcase(mutablestring3));

	return 0;
}*/