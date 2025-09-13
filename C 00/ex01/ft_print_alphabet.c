/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 23:03:26 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:34:36 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Prints The Alphabet In Order For Lowercase Characters
 */
void	ft_print_alphabet(void)
{
	int		counter;
	char	charactertowrite;

	counter = 0;
	while (counter < 26)
	{
		charactertowrite = 'a' + counter;
		write(1, &charactertowrite, 1);
		++counter;
	}
}

/*
int main()
{
	ft_print_alphabet();

	return 0;
}
 */