/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 16:11:04 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 17:04:45 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * The amount of repetition made me just copy paste these already written
 * 		functions CBA to keep rewriting them >_<
 *
 * 		ft_putchar, ft_putstr and ft_putnbr everything we've seen so far
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

/*
 * So apparently mans isspace checks a bunch of different types
 * 		' ' - Space Itself
 * 		'\t' - Tabs
 * 		'\n' - New Lines
 * 		'\v' - Vertical Tab ( Honestly Dunno )
 * 		'\f' - Form Feed ( Apparently used in prints? )
 * 		'\r' - Carriage Return ( More Windows-y )
 *
 * 	Source:
 * 	https://www.programiz.com/c-programming/library-function/ctype.h/isspace
 */
int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r');
}

/*
 * Atoi function, this will skip all starting whitespaces
 *
 * It then handles the multiple signs at the start of the string because reasons
 *
 * Finally, it transforms the string into a number, using the % and * trick
 */
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace((unsigned char)str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

/*
int main(void)
{
	char *tests[] =
	{
			"42",
			"   42",
			"   -42",
			"++42",
			"--42",
			"+-+-42",
			"   +--+123abc456",
			"0",
			"-0",
			"   2147483647",
			"   -2147483648",
			"   0000123",
			"   -0000123",
			"abc123",
			""
	};

	for (unsigned long long t = 0; t < sizeof(tests)/sizeof(tests[0]); t++)
	{
		ft_putstr("Test: \"");
		ft_putstr(tests[t]);
		ft_putstr("\" -> ");
		ft_putnbr(ft_atoi(tests[t]));
		ft_putchar('\n');
	}

	return 0;
}*/