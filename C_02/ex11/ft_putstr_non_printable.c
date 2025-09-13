/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:20:06 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 16:01:22 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(char c)
{
	char	output;
	char	*hex;

	hex = "0123456789abcdef";
	output = '\\';
	write(1, &output, 1);
	output = hex[c / 16];
	write(1, &output, 1);
	output = hex[c % 16];
	write(1, &output, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i++];
		if (c >= 32 && c <= 126)
		{
			write(1, &c, 1);
			continue ;
		}
		ft_print_hex(c);
	}
}

/*
int main(void)
{
	char str[] = "Hello\nHow are you?";
	ft_putstr_non_printable(str);
	return 0;
}*/