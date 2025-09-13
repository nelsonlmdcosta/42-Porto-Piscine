/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 23:03:27 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:36:13 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Prints All Characters Related To Numbers Onto The Screen
 */
void	ft_print_numbers(void)
{
	int		counter;
	char	charactertowrite;

	counter = 0;
	while (counter < 10)
	{
		charactertowrite = '0' + counter;
		write(1, &charactertowrite, 1);
		++counter;
	}
}

/*
int main()
{
	ft_print_numbers();

	return 0;
}*/