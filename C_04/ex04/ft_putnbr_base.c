/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:23:06 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/11 19:37:15 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *string)
{
	int	i;

	i = 0;
	while (string && *(string + i))
		++i;
	return (i);
}

/*
 * 	For a base to be considered valid, we need a few things
 *   	base must contain at least two characters
 *   	base must not contain illegal character or '+' or '-'
 *   	base must not contain duplicate characters
 *   	base must not contain control/space characters
 *   		(we treat any char <= 32 or 127 as invalid)
 */
int	is_valid_base(char *base, int baselength)
{
	int	i;
	int	j;

	if (baselength < 2)
		return (0);
	i = 0;
	while (i < baselength)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] >= 127)
			return (0);
		j = i + 1;
		while (j < baselength)
		{
			if (base[i] == base[j])
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}

/*
 * 	Recursive Function Helper To Print The Values Of To Our Given Base
 *
 * 	It takes in the non-negative number as a long so int fits in it
 * 		comfortably, negative is already handled before this is called
 *
 * 	The solution is hilariously simple too. Just do the modulo of the base
 * 		This will give you the current iterations number, otherwise you
 * 		keep recursing dividing the value by the length! Simple! haha
 *
 * 	Source:
 * 	https://shorturl.at/bhr3x
 */
void	recursive_putnbr_base(long nbr, char *base, int base_len)
{
	char	output;

	if (nbr >= base_len)
		recursive_putnbr_base(nbr / base_len, base, base_len);
	output = base[nbr % base_len];
	write(1, &output, 1);
}

/*
 * 	Function Validates the Given and prints the number in the given base.
 * 		This handles negative numbers by converting the integer up to
 * 		facilitate the conversion from negative to positive due to how
 * 		INT_MIN to INT_MAX works
 *
 * 	Calls Validation Function To Ensure The Base Is A Valid Type Even if
 *		it gets a little crazy.
 *
 *	Other Functions need the length too so we just comput it once here
 *		and send it through to avoid Recomputing it. Minor thing tbh
 *
 * 	Calls Recursive Function To Do The Actual Printing
 */
void	ft_putnbr_base(int nbr, char *base)
{
	int		baselength;
	long	longnumber;

	baselength = ft_strlen(base);
	if (!base || !is_valid_base(base, baselength))
		return ;
	longnumber = nbr;
	if (longnumber < 0)
	{
		write(1, "-", 1);
		longnumber = -longnumber;
	}
	recursive_putnbr_base(longnumber, base, baselength);
}
