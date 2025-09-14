/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 18:43:29 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/14 19:23:42 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	String Length, At This Point I Shouldn't Have To Explain This :p
 */
int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

/*
 * Checks the validity of the base, it shouldnt be less than 2 (otherwise its
 * 		not a base)
 * Also checks to ensure that any invalid characters such as spaces isspace
 * 		chars then
 * Finally checks for duplicates
 */
int	check_base(char *base)
{
	int	index_outer;
	int	index_dupes;

	if (ft_strlen(base) < 2)
		return (0);
	index_outer = 0;
	while (base[index_outer])
	{
		if (base[index_outer] == '+' || base[index_outer] == '-'
			|| base[index_outer] == ' '
			|| (base[index_outer] >= 9 && base[index_outer] <= 13))
			return (0);
		index_dupes = index_outer + 1;
		while (base[index_dupes])
		{
			if (base[index_outer] == base[index_dupes])
				return (0);
			index_dupes++;
		}
		index_outer++;
	}
	return (1);
}

/*
 *	Quick way to check the total length of the char we need for our
 *		string, we check if its <= 0 means we either have 0 or negatives
 *		so that returns 1, so we can work with that number.
 *
 *	We then / by base length until we hit 0, and that's the length of
 *		our number
 */
int	get_number_length_base(long number, int base_length)
{
	int	length;

	length = (number <= 0);
	while (number)
	{
		number /= base_length;
		length++;
	}
	return (length);
}

/*
 *	Fill out the string with our base value.
 *
 *	Basically if it's a special case of == 0, we just make sure it's the
 *		first character in the base.
 *
 *	Otherwise we handle the possibility of negative numbers, then we go
 *		ahead and do what we always have in terms of converting the number
 *		to a base in this case filling the position right to left
 */
void	fill_number_base(char *result, long number, char *base, int length)
{
	int	base_length;

	base_length = ft_strlen(base);
	result[length] = '\0';
	if (number == 0)
		result[0] = base[0];
	if (number < 0)
	{
		result[0] = '-';
		number = -number;
	}
	while (number)
	{
		result[--length] = base[number % base_length];
		number /= base_length;
	}
}
