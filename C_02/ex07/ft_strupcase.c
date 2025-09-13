/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:21:45 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:59:35 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*returnaddress;

	returnaddress = str;
	while (*(str) != '\0')
	{
		if ((*str) >= 'a' && *str <= 'z' )
		{
			*str = *str - 32;
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

	printf("%s", ft_strupcase(mutablestring1));
	printf("%s", ft_strupcase(mutablestring2));
	printf("%s", ft_strupcase(mutablestring3));

	return 0;
}*/