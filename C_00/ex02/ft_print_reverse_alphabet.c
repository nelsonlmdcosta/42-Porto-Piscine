/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 23:03:27 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/20 09:17:53 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Prints The Alphabet In Reverse
 */
void	ft_print_reverse_alphabet(void)
{
	int		counter;
	char	charactertowrite;

	counter = 25;
	while (counter >= 0)
	{
		charactertowrite = 'a' + counter;
		write(1, &charactertowrite, 1);
		--counter;
	}
}
