/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 23:03:46 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/10 23:12:41 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Prints The Digits To The Screen As Espects
 */
void	print(int firstnumber, int secondnumber)
{
	char	valuetoprint;

	valuetoprint = (firstnumber / 10) + '0';
	write(1, &valuetoprint, 1);
	valuetoprint = (firstnumber % 10) + '0';
	write(1, &valuetoprint, 1);
	valuetoprint = ' ';
	write(1, &valuetoprint, 1);
	valuetoprint = (secondnumber / 10) + '0';
	write(1, &valuetoprint, 1);
	valuetoprint = (secondnumber % 10) + '0';
	write(1, &valuetoprint, 1);
}

/*
 * Uses a sliding window approach, that allows us to print multiple combinations
 * 		of the two numbers
 */
void	ft_print_comb2(void)
{
	int		firstnumber;
	int		secondnumber;

	firstnumber = 0;
	secondnumber = 0;
	while (firstnumber < 99)
	{
		secondnumber = firstnumber + 1;
		while (secondnumber <= 99)
		{
			print(firstnumber, secondnumber);
			if (!(firstnumber == 98 && secondnumber == 99))
			{
				write(1, ", ", 2);
			}
			secondnumber++;
		}
		firstnumber++;
	}
}
