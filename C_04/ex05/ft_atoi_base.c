/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 18:14:45 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/11 19:53:28 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *string)
{
	int	i;

	i = 0;
	while (string && *(string + i))
		i++;
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

/* Returns index of character c in base, or -1 if not found */
int	getcharacterindexinbase(char character, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == character)
			return (i);
		i++;
	}
	return (-1);
}

/*
 *	Nothing special just takes a string and pushes the pointer forward
 *		so we can ignore all whitespaces similar to isspace() who knows
 *		what moulinette is going to do. Then returns this pushed pointer
 */
char	*skip_whitespace(char *str)
{
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		++str;
	return (str);
}

/*
 * Similar To Atoi just converts a base to a integer.
 *
 * Checks the validity of the base, then handles whitespaces
 * 		as well as the sign, then finally expand the base into
 * 		the integer values! :D
 *
 * 	The meat of this is that we try get the character in the base
 * 		so we can convert it back into a integer relative to its base
 * 		using the place-value system
 * 		https://en.wikipedia.org/wiki/Positional_notation
 *		Basically tis is fancy speak for, take the characters id in
 *		its location in the base, add it to the multiplication between
 *		the current result * the baselength, this will ensure the
 *		number is shifted across correctly back into it's position
 *
 *		Example:
 *		result = 0;
 *		baselength = 10 (decimal)
 *
 *		We try the character 4, which is checked against the
 *		"dictionary" of our base and appears in position 4
 *
 *		0 * 10 + 4 = 4;
 *
 *		If we then have a character 3, which is checked against
 *		the dictionary again, our base is in position 3
 *
 *		4 * 10 + 3 = 43
 *
 *	Simple yet elegant, Maths is beautiful, Just wish I was smarter :'D
 */
int	ft_atoi_base(char *str, char *base)
{
	int	baselength;
	int	sign;
	int	result;
	int	idinbase;

	sign = 1;
	baselength = ft_strlen(base);
	if (!is_valid_base(base, baselength))
		return (0);
	str = skip_whitespace(str);
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -sign;
	result = 0;
	while (*str)
	{
		idinbase = getcharacterindexinbase(*str, base);
		if (idinbase == -1)
			break ;
		result = result * baselength + idinbase;
		str++;
	}
	return (result * sign);
}
