/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 23:03:26 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:37:07 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Just Prints The Passed In Digits
 */
void	print(char firstdigit, char seconddigit, char thirddigit)
{
	char	characteroutput;

	characteroutput = 48 + firstdigit;
	write(1, &characteroutput, 1);
	characteroutput = 48 + seconddigit;
	write(1, &characteroutput, 1);
	characteroutput = 48 + thirddigit;
	write(1, &characteroutput, 1);
}

/*
 * Uses a sliding window approach to only print out the valid combinations
 */
void	ft_print_comb(void)
{
	int	firstdigit;
	int	seconddigit;
	int	thirddigit;

	firstdigit = 0;
	seconddigit = 0;
	thirddigit = 0;
	while (firstdigit <= 7)
	{
		seconddigit = firstdigit + 1;
		while (seconddigit <= 8)
		{
			thirddigit = seconddigit + 1;
			while (thirddigit <= 9)
			{
				print(firstdigit, seconddigit, thirddigit);
				if (!(firstdigit == 7 && seconddigit == 8 && thirddigit == 9))
					write(1, ", ", 2);
				++thirddigit;
			}
			++seconddigit;
		}
		++firstdigit;
	}
}
