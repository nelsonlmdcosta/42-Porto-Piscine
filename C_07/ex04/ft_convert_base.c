/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 13:30:43 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/14 19:24:09 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		check_base(char *base);
int		get_number_length_base(long number, int base_length);
void	fill_number_base(char *result, long number, char *base, int length);

/*
 * 	Same as the other excercises base is the dicitonary, we try to
 * 	find the character in the base to return its index back.
 */
int	get_base_index(char character, char *base)
{
	int	base_index;

	base_index = 0;
	while (base[base_index])
	{
		if (base[base_index] == character)
			return (base_index);
		base_index++;
	}
	return (-1);
}

/*
 * Classic atoi, skips spaces and isspace characters, then ensures the sign
 * 		finally conversts the from the base to the number and retusn teh
 * 		converted number as an integer
 */
int	ft_atoi_base(char *str, char *base)
{
	int	position;
	int	sign;
	int	result;
	int	base_value;
	int	base_length;

	position = 0;
	sign = 1;
	result = 0;
	base_length = ft_strlen(base);
	while (str[position] == ' ' || (str[position] >= 9 && str[position] <= 13))
		position++;
	while (str[position] == '+' || str[position] == '-')
	{
		if (str[position] == '-')
			sign = -sign;
		position++;
	}
	base_value = get_base_index(str[position], base);
	while (base_value != -1)
	{
		result = result * base_length + base_value;
		base_value = get_base_index(str[++position], base);
	}
	return (result * sign);
}

/*
 * Helper that does the opposite, it converts the integer into a
 * 		base. Gets the base length, repeatedly divides it till we
 * 		get the integer we want that way we can alocate the size of
 * 		our number, then go ahead.
 * 	We also need to handle the special 0 case, it'll be represented
 * 		as the 0 index.
 * 	Then just does the usual signage shenanigans, and places all the
 * 		characters in their respective buffers
 */
char	*ft_itoa_base(int number, char *base)
{
	int		length;
	char	*result;
	long	number_long;

	number_long = number;
	length = get_number_length_base(number_long, ft_strlen(base));
	result = (char *) malloc(length + 1);
	if (!result)
		return (NULL);
	fill_number_base(result, number_long, base, length);
	return (result);
}

/*
 *	Base function that's requested of us, if a base fails nothing else should
 *		happen, otherwise we conver the base to an integer, then to the char
 *		version for my sanity, im sure there must be a way to convert between
 *		but I'm going to skip that
 */
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (!check_base(base_from) || !check_base(base_to))
		return (NULL);
	return (ft_itoa_base(ft_atoi_base(nbr, base_from), base_to));
}
